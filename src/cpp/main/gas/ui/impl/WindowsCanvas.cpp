#include "WindowsCanvas.hpp"

namespace gas{
namespace ui{

WindowsCanvas::WindowsCanvas(HWND handle, HDC hdc): mHandle(handle), mHdc(hdc){}

WindowsCanvas::~WindowsCanvas(){
    ReleaseDC(mHandle, mHdc);
}

void WindowsCanvas::drawText(long x, long y, std::string& text, int count){
    //   HDC dc = GetDC(mWnd);
    // PAINTSTRUCT ps;
    //         HDC hdc = BeginPaint(hwnd, &ps);
    //         FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));
    //         EndPaint(hwnd, &ps);   
}

}
}
