#pragma once 

#include <string>
#include <windows.h>

#include "..\Canvas.hpp"

namespace gas{
namespace ui{

class WindowsCanvas: public Canvas{
protected:
    HDC mHdc;
public: 
    WindowsCanvas(HDC hdc);
    ~WindowsCanvas() override;
    void drawText(long x, long y, std::string& text, int count) override;
};

}
}
