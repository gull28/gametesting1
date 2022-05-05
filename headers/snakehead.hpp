#ifndef GAMETESTING1_SNAKEHEAD_HPP
#define GAMETESTING1_SNAKEHEAD_HPP

#include <SFML/Graphics.hpp>

using namespace sf;

class SnakeHead {
private:
    Vector2f position;
    RectangleShape section;

public:
    explicit SnakeHead(Vector2f startPos);

    Vector2f getPos();

    void setPos(Vector2f newPos);

    RectangleShape getShape();

    void update();

};


#endif //GAMETESTING1_SNAKEHEAD_HPP
