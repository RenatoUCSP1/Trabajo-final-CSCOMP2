#include"archivos de cabecera/header.hpp"
#include <SFML/Graphics.hpp>
#include "archivos de cabecera/pacman.hpp"
#include "colision.cpp"
#include "archivos de cabecera/ente.hpp"
pacman::pacman() :
	animation_over(0),
	dead(0),
	movimiento(0),
	energizer_timer(0),
	position({0, 0})
{}
void pacman::draw(sf::RenderWindow& i_window){
    sf::CircleShape circulo(CELL_SIZE/2);
    circulo.setFillColor(sf::Color(255,255,0));
    circulo.setPosition(position.x, position.y);
    i_window.draw(circulo);

}
void set_position(short i_x , short i_y){
    Position {i_x, i_y};    
}

void pacman::conmov(unsigned char i_level, std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map){
std::array<bool, 4> walls{};
walls[0]= map_collision(0,0,PACMAN_SPEED+ position.x, position.y,i_map);
walls[1]= map_collision(0,0,position.x,position.y - PACMAN_SPEED, i_map );
walls[2]= map_collision(0,0,position.x-PACMAN_SPEED, position.y, i_map);
walls[3]= map_collision(0,0, position.x, PACMAN_SPEED + position.y, i_map);
    if ( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        if (0 == walls[0]){
        movimiento = 0;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        if (0 == walls[1]){
        movimiento= 1;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        if (0 == walls[2]){
        movimiento = 2;
        }
    }
       if( 1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        if (0 == walls[3]){
        movimiento = 3;
        }
    }

if (0 == walls[movimiento])
	{
		switch (movimiento)
		{
case 0:
{
    position.x += PACMAN_SPEED;
    break;
}
case 1:
{
    position.y -= PACMAN_SPEED;
    break;
}
case 2:
{
    position.x += PACMAN_SPEED;
        break;
}
case 3:
{
    position.y -= PACMAN_SPEED;
    break;
}
    }
}
if (-CELL_SIZE >= position.x)
	{
		position.x = CELL_SIZE * MAP_WIDTH - PACMAN_SPEED;
	}
	else if (CELL_SIZE * MAP_WIDTH <= position.x)
	{
		position.x = PACMAN_SPEED - CELL_SIZE;
	}

	if (1 == map_collision(1, 0, position.x, position.y, i_map)) //Super pildora
	{
		energizer_timer = static_cast<unsigned short>(ENERGIZER_DURATION / pow(2, i_level));
	}
	else
	{
		energizer_timer = std::max(0, energizer_timer - 1);
	}
}

    
