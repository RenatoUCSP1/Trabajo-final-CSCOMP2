<<<<<<< HEAD
#pragma once
#include"dependencias.h"
#include <SFML/Graphics.hpp>
class pacman{
    unsigned char movimiento;
    Position position;
    public:
    void draw(sf::RenderWindow& i_window );
    void set_posicion(unsigned short i_x, unsigned short i_y);
};
void pacman::draw(sf::RenderWindow& i_window){
    sf::CircleShape circulo(CELL_SIZE/2);
    circulo.setFillColor(sf::Color(255,255,0));
    circulo.setPosition(position.x, position.y);
    i_window.draw(circulo);

}

=======
#pragma once
#include"dependencias.h"
#include <SFML/Graphics.hpp>
class pacman{
    unsigned char movimiento;
    Position position;
    public:
    void draw(sf::RenderWindow& i_window );
    void set_posicion(unsigned short i_x, unsigned short i_y);
};
void pacman::draw(sf::RenderWindow& i_window){
    sf::CircleShape circulo(CELL_SIZE/2);
    circulo.setFillColor(sf::Color(255,255,0));
    circulo.setPosition(position.x, position.y);
    i_window.draw(circulo);

}

>>>>>>> c47d47475af4dc66bc9c2d0a3693ae55ffcb6e7f
