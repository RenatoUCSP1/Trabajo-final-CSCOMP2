#pragma once
#include"dependencias.h"
#include <SFML/Graphics.hpp>
#include "crash.hpp"
class pacman{
    unsigned char movimiento;
    unsigned char direction;
    unsigned short animation_timer;
	unsigned short energizer_timer;
    Position position;
    public:
    void draw(sf::RenderWindow& i_window );
    void set_posicion(unsigned short i_x, unsigned short i_y);
    void conmov(unsigned char i_level, std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map);
    void resetear();
    void set_dead(bool i_dead);
};
pacman::pacman() :
	direction(0),
	energizer_timer(0),
	position({0, 0}) 
    {

    }

void pacman::draw(sf::RenderWindow& i_window){
    sf::CircleShape circulo(CELL_SIZE/2);
    circulo.setFillColor(sf::Color(255,255,0));
    circulo.setPosition(position.x, position.y);
    i_window.draw(circulo);

}
void set_posicion(short i_x , short i_y){
    position = {i_x, i_y};    
}

void pacman::conmov(unsigned char i_level, std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map){
std::array<bool, 4> walls{};
walls[0]=map_colision(0,0,PACMAN_SPEED+ Position.X, Position.Y,i_map);
walls[1]=map_colision(0,0,Position.x,Position.y - PACMAN_SPEED, i_map );
walls[2]=map_colision(0,0,Position.x-PACMAN_SPEED, Position.y, i_map);
walls[3]=map_colision(0,0, Position.x, PACMAN_SPEED + Position.y, i_map);
    if ( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        if (0 == walls[0]){
        direction = 0;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        if (0 == walls[1]){
        direction = 1;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        if (0 == walls[2]){
        direction = 2;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        if (0 == walls[3]){
        direction = 3;
        }
    }
	if (0 == walls[direction])
	{
		switch (direction)
		{
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
}
}
}