#include <windows.h>

#include <gas\Window.hpp>
#include <gas\App.hpp>

int WINAPI WinMain(
        HINSTANCE hInstance,
        HINSTANCE hPrevInstance, 
        LPSTR pCmdLine, 
        int nCmdShow
){
    gas::ui::App app(new gas::ui::Window(nCmdShow));
    app.run();
    return 0;
}