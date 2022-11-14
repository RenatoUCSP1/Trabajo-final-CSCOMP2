#pragma once
#include "dependencias.hpp"
#include <array>
#include <SFML/Graphics.hpp>
void draw_map(const std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map, sf::RenderWindow& i_window);