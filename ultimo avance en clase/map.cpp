#include <iostream>
#include <array>
#include <SFML/Graphics.hpp>
#include"archivos de cabecera/header.hpp"
using namespace std;
void draw_map(const std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map, sf::RenderWindow& i_window);
void draw_map(const std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map, sf::RenderWindow& i_window){
sf::RectangleShape cell_shape(sf::Vector2f(CELL_SIZE,CELL_SIZE));
for (unsigned char a = 0; a < MAP_WIDTH; a++){
	for (unsigned char b=0; b< MAP_HEIGHT; b++){
		cell_shape.setPosition(CELL_SIZE*a,CELL_SIZE*b);
		switch (i_map[a][b]){
			case Cell::Wall:{
				cell_shape.setFillColor(sf::Color(36,36,255));
				i_window.draw(cell_shape);
            }
        }
    }
}
}