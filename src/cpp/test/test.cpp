#include <gas\Window.hpp>
#include <gas\App.hpp>

int main(int argc, char** argv){
    gas::App app(new gas::Window());
    app.run();
    return 0;
}