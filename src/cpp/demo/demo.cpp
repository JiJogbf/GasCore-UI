#include <windows.h>

#include <gas\ui\Window.hpp>
#include <gas\ui\App.hpp>
#include <gas\ui\ViewGroup.hpp>
#include <gas\ui\RectangleView.hpp>
#include <gas\ui\TextView.hpp>

int WINAPI WinMain(
        HINSTANCE hInstance,
        HINSTANCE hPrevInstance, 
        LPSTR pCmdLine, 
        int nCmdShow
){
    gas::ui::ViewGroup* root = new gas::ui::ViewGroup();
    root->add(new gas::ui::TextView(20, 20, 40, 20, "My Text View Works!"));
    root->add(new gas::ui::TextView(20, 100, 40, 20, "And my second one too!"));
    root->add(new gas::ui::RectangleView(20, 200, 40, 20));
    
    gas::ui::App app(
        new gas::ui::Window(
            root, 
            nCmdShow
        )
    );
    app.run();
    return 0;
}