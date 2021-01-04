#include "WindowsWindowImpl.hpp"

#include "WindowsCanvas.hpp"

// #include <wingdi.h>

namespace gas{
namespace ui{
namespace impl{

LRESULT CALLBACK WindowsWindowImpl::WindowProc(
    HWND hwnd, 
    UINT uMsg, 
    WPARAM wParam, 
    LPARAM lParam
){

    WindowsWindowImpl* impl = (WindowsWindowImpl*)GetWindowLongPtr(hwnd, GWL_USERDATA);
    // Some how getting this pointer here !
    switch (uMsg){
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        case WM_PAINT:{
            impl->paint();
        }
        return 0;

    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

WindowsWindowImpl::WindowsWindowImpl(View* root, int mode):
    WindowImpl(root),
    mWnd(nullptr), 
    mShowMode(mode)
{}

WindowsWindowImpl::~WindowsWindowImpl(){}

void WindowsWindowImpl::create(){
     // Register the window class.
    const char CLASS_NAME[]  = "Sample Window Class";


    // @todo: #5 Should have acces to hinstance variable 
    // from other source than that.
    HINSTANCE inst = GetModuleHandle(nullptr);
    WNDCLASS wc = { };
    
    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = inst;
    wc.lpszClassName = CLASS_NAME;

    /*@todo: #4 move registration outside Window class. 
        This sould be called just once per Window type */
    RegisterClass(&wc);

    mWnd = CreateWindowEx(
        0, // Optional window styles.
        CLASS_NAME,                     // Window class
        "Learn to Program Windows",    // Window text
        WS_OVERLAPPEDWINDOW,            // Window style

        // Size and position
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

        NULL,       // Parent window    
        NULL,       // Menu
        inst,  // Instance handle
        NULL        // Additional application data
        );

    SetWindowLongPtr(mWnd, GWL_USERDATA, (LONG_PTR)this);
    
}

void WindowsWindowImpl::close(){
    if(mWnd != nullptr){
        CloseWindow(mWnd);
        mWnd = nullptr;
    }
}

void WindowsWindowImpl::show(){
    ShowWindow(mWnd, mShowMode); 
}

Canvas* WindowsWindowImpl::canvas(){
    return new WindowsCanvas(mWnd, GetDC(mWnd));
}


}
}
}