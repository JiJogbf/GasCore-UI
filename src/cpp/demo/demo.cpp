#include <windows.h>

#include <gas\ui\Window.hpp>
#include <gas\ui\App.hpp>
#include <gas\ui\RectangleView.hpp>
#include <gas\ui\TextView.hpp>

int WINAPI WinMain(
        HINSTANCE hInstance,
        HINSTANCE hPrevInstance, 
        LPSTR pCmdLine, 
        int nCmdShow
){
    gas::ui::App app(
        new gas::ui::Window(
            new gas::ui::TextView(40, 40, 100, 100, "My Text View Works!"), 
            nCmdShow
        )
    );
    app.run();
    return 0;
}