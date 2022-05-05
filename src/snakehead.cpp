#include "snakehead.hpp"


SnakeHead::SnakeHead(Vector2f startPos) {
    section.setSize(Vector2f(20,20));
    section.setFillColor(Color::Green);
    section.setPosition(startPos);
}

Vector2f SnakeHead :: getPos() {
    return position;
}

void SnakeHead ::setPos(Vector2f newPos) {
    position = newPos;
}

RectangleShape SnakeHead ::getShape() {
    return section;
}

void SnakeHead::update() {
    section.setPosition(position);
}