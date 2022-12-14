#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "header.hpp"
void draw_map(const std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map, sf::RenderWindow& i_window);