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
    void muerte()
};
void pacman::draw(sf::RenderWindow& i_window){
    sf::CircleShape circulo(CELL_SIZE/2);
    circulo.setFillColor(sf::Color(255,255,0));
    circulo.setPosition(position.x, position.y);
    i_window.draw(circulo);

}
void set_posicion(short i_x , short i_y){
    Position={i_x, i_y};    
}

void pacman::conmov(){
walls[0]=map_colision(0,0,PACMAN_SPEED+ Position.X, Position.Y,i_map);
walls[1]=map_colision(0,0,Position.x,Position.y - PACMAN_SPEED, i_map );
walls[2]=map_colision(0,0,Position.x-PACMAN_SPEED, Position.y, i_map);
walls[3]=map_colision(0,0, Position.x, PACMAN_SPEED + Position.y, i_map);
    if ( 1 == sf::Keyboard::isKeyPressed(sd::Keyboard::Down)){
        if (0 == walls[0]){
        Direction = 0;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sd::Keyboard::Left)){
        if (0 == walls[1]){
        Direction = 1;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sd::Keyboard::Right)){
        if (0 == walls[2]){
        Direction = 2;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sd::Keyboard::Up)){
        if (0 == walls[3]){
        Direction = 3;
        }
    }
}
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
