#include "WindowsWindowImpl.hpp"

namespace gas{
namespace ui{
namespace impl{

static LRESULT CALLBACK WindowProc(
    HWND hwnd, 
    UINT uMsg, 
    WPARAM wParam, 
    LPARAM lParam
){
    switch (uMsg){
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        case WM_PAINT:{
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));
            EndPaint(hwnd, &ps);
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
 /*@todo: #4 move registration outside Window class. 
     This sould be called just once per Window type */

    // Register the window class.
    const char CLASS_NAME[]  = "Sample Window Class";


    // @todo: #5 Should have acces to hinstance variable 
    // from other source than that.
    HINSTANCE inst = GetModuleHandle(nullptr);
    WNDCLASS wc = { };
    
    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = inst;
    wc.lpszClassName = CLASS_NAME;

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
}

void WindowsWindowImpl::close(){
    if(mWnd != nullptr){
        CloseWindow(mWnd);
        mWnd = nullptr;
    }
}

void WindowsWindowImpl::show(){
    ShowWindow(mWnd, mShowMode);
    WindowImpl::show();
}


}
}
}