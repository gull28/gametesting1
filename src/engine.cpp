#include "engine.hpp"

const sf::Time Engine::TimePerFrame = seconds(1.f/75.f);

Engine::Engine() {
    resolution = Vector2f (800,600);
    window.create(VideoMode(resolution.x,resolution.y),"Snake", Style::Default);
    window.setFramerateLimit(FPS);

    createSnake();
}

void Engine::moving() {
    //Runs the window till closed
    while(window.isOpen()){
        input();
        draw();
    }
}
//create snake as game starts

void Engine::createSnake() {
    snake.clear();
    snake.emplace_back(Vector2f(100, 100));
    snake.emplace_back(Vector2f(80, 100));
    snake.emplace_back(Vector2f(60, 100));
}


//add part of snake after player eats the apple
void Engine::addPart() {
    Vector2f newPart = snake[snake.size() - 1].getPos();
    snake.emplace_back(newPart);
}
