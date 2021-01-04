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

    RECT rcWindow;
    GetClientRect(mHandle, &rcWindow);

    RECT rc1;
    rc1 = rcWindow;
    rc1.left = x;
    rc1.top = y;
    rc1.bottom = x + 20;
    rc1.right = y + 100;
    DrawText(hDC, TEXT(text.c_str()), /*todo: #17 Do dependency on count param here latter*/-1, &rc1, 
        DT_SINGLELINE);   //  DT_VCENTER | DT_CENTER

    EndPaint(mHandle, &ps);    
}

void WindowsCanvas::drawRectangle(long x, long y, long width, long height){
    PAINTSTRUCT ps;
    HDC hDC = BeginPaint(mHandle, &ps);
    
    RECT rcWindow;
    GetClientRect(mHandle, &rcWindow);

    COLORREF backColor = GetBkColor(hDC);
    HBRUSH brush = CreateSolidBrush(backColor); 

    RECT rc1;
    rc1 = rcWindow;
    rc1.left = x;
    rc1.top = y;
    rc1.bottom = x + width; 
    rc1.right = y + height;

    SetDCPenColor(hDC, RGB(0, 255, 0));   
    FillRect(hDC, &rc1, (HBRUSH)brush);
    EndPaint(mHandle, &ps);

    DeleteObject(brush);
}

}
}
