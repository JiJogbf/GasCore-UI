#pragma once 

#include <string>

#include "..\Canvas.hpp"

namespace gas{
namespace ui{

class WindowsCanvas: public Canvas{
public: 
    WindowsCanvas();
    ~WindowsCanvas() override;
    void drawText(long x, long y, std::string& text, int count) override;
};

}
}
