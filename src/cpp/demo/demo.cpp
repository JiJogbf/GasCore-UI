#include <windows.h>

#include <gas\ui\Window.hpp>
#include <gas\ui\App.hpp>
#include <gas\ui\TextView.hpp>

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