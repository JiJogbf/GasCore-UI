#include "WindowsCanvas.hpp"

namespace gas{
namespace ui{

WindowsCanvas::WindowsCanvas(HWND handle, HDC hdc): mHandle(handle), mHdc(hdc){}

WindowsCanvas::~WindowsCanvas(){
    ReleaseDC(mHandle, mHdc);
}

void WindowsCanvas::drawText(long x, long y, std::string& text, int count){
    PAINTSTRUCT ps;
    HDC hDC = BeginPaint(mHandle, &ps);
    RECT rc1;
    RECT rcWindow;

    GetClientRect(mHandle, &rcWindow);
    rc1 = rcWindow;
    rc1.left = x;
    rc1.top = y;
    DrawText(hDC, TEXT(text.c_str()), -1, &rc1, 
        DT_CENTER | DT_SINGLELINE | DT_VCENTER);   
    EndPaint(mHandle, &ps);    
}

void WindowsCanvas::drawRectangle(long x, long y, long width, long height){
    PAINTSTRUCT ps;
    HDC hDC = BeginPaint(mHandle, &ps);
    HBRUSH brush = nullptr;

    RECT rcWindow;
    GetClientRect(mHandle, &rcWindow);

    COLORREF backColor = GetBkColor(hDC);
    brush = CreateSolidBrush(backColor); 

    RECT rc1;
    rc1 = rcWindow;
    rc1.left = x;
    rc1.top = x;

    SetDCPenColor(hDC, RGB(0, 255, 0));   

    // (COLOR_WINDOW + 1)
    FillRect(hDC, &rc1, (HBRUSH)brush);
    EndPaint(mHandle, &ps);
    DeleteObject(brush);
}

}
}
