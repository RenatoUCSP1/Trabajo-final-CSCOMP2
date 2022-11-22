#pragma once
#include"dependencias.h"
#include <SFML/Graphics.hpp>
class pacman{
    unsigned char movimiento;
    Position position;
    public:
    void draw(sf::RenderWindow& i_window );
    void set_posicion(unsigned short i_x, unsigned short i_y);
    void conmov();
};
void pacman::draw(sf::RenderWindow& i_window){
    sf::CircleShape circulo(CELL_SIZE/2);
    circulo.setFillColor(sf::Color(255,255,0));
    circulo.setPosition(position.x, position.y);
    i_window.draw(circulo);

}
void pacman::conmov()
case 0:
{
    Position.x += PACMAN_SPEED;
    break;
}
case 1:
{
    Position.y -= PACMAN_SPEED;
    break;
}
case 2:
{
    Position.x += PACMAN_SPEED;
        break;
}
case 3:
{
    Position.y -= PACMAN_SPEED;
    break;
}