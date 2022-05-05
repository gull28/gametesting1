#ifndef GAMETESTING1_ENGINE_HPP
#define GAMETESTING1_ENGINE_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include "snakehead.hpp"
#include <vector>

using namespace sf;
using namespace std;

class Engine {
private:
    //Window creation
    Vector2f resolution;
    RenderWindow window;
    const unsigned int FPS = 75;
    static const Time TimePerFrame;

    vector<SnakeHead> snake;



public:
    //constructor

    Engine();

    void input();

    void draw();

    void moving();

    void createSnake();

    void addPart();
};


#endif //GAMETESTING1_ENGINE_HPP
