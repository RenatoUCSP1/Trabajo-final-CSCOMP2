#include "archivos de cabecera/Consumibles.hpp"

void Consumibles::setUpTile()
{
    this->tile.setSize({30.f,30.f});
    this->tile.setOutlineColor(Color::Yellow);
}

void Consumibles::initFood()
{
    this->food.setFillColor(Color::White);
    this->food.setRadius(3.f);
}

int Consumibles::foodCount()
{
    return this->food_Count;
}

void Consumibles::changeColor(Color a)
{
    if (this->tile.getFillColor() != Color::Black)
        this->tile.setFillColor(a);
}


Consumibles::Consumibles(float x, float y, bool passable,sf::Color b)

{
    if (b == Color(18, 97, 160)) {
        this->initFood();
        this->food.setPosition(x + 15, y + 15);
        food_Count++;
    }
    else if(b == Color::White) {
        this->setUpTile();
        if(this->dir == -1)
            this->pos = Vector2f(x-10, y);
        else {
            this->pos = Vector2f(x, y);
        }
        this->tile.setPosition(pos);
        this->tile.setFillColor(Color(33, 33, 222));
    }
    else {
        this->setUpTile();
        this->pos = Vector2f(x, y);
        this->tile.setPosition(pos);
        this->food.setFillColor(Color(0,12,22));
    }
        
    this->isPassable = passable;
}

