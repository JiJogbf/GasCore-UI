#include <windows.h>

#include <gas\Window.hpp>
#include <gas\App.hpp>
#include <gas\TextView.hpp>

int WINAPI WinMain(
        HINSTANCE hInstance,
        HINSTANCE hPrevInstance, 
        LPSTR pCmdLine, 
        int nCmdShow
){
    // mock TextView
    gas::ui::App app(new gas::ui::Window(new gas::ui::TextView(), nCmdShow));
    app.run();
    return 0;
}