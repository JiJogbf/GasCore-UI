#pragma once 

#include <string>

#include "..\Canvas.hpp"

namespace gas{
namespace ui{

// @todo: #13 Move to file WindowsCanvas.hpp latter
class WindowsCanvas: public Canvas{
public: 
    WindowsCanvas();
    ~WindowsCanvas() override;
    void drawText(long x, long y, std::string& text, int count) override;
};

}
}
