#include "engine.hpp"

void Engine::input(){
    Event event{};

    while (window.pollEvent(event)) {
        if (event.type == Event::Closed) {
            window.close();
        }
        if (event.type == Event::KeyPressed){
            if(Keyboard::isKeyPressed(Keyboard::Escape)){
                window.close();
            }
        }
    }


}