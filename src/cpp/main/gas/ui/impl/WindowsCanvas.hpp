#pragma once 

#include <string>
#include <windows.h>

#include "..\Canvas.hpp"

namespace gas{
namespace ui{

class WindowsCanvas: public Canvas{
protected:
    HDC mHdc;
    HWND mHandle;
public: 
    WindowsCanvas(HWND handle, HDC hdc);
    ~WindowsCanvas() override;
    void drawText(long x, long y, std::string& text, int count) override;
    void drawRectangle(long x, long y, long width, long height) override;
};

}
}
