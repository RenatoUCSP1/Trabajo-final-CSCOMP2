#include <array>
#include <string>
#include <SFML/Graphics.hpp>
#include "Header.hpp"
#include "sketch.hpp"

std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> convert_sketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch)
{
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> output_map{};

	for (unsigned char a = 0; a < MAP_HEIGHT; a++)
	{
		for (unsigned char b = 0; b < MAP_WIDTH; b++)
		{
			switch (i_map_sketch[a][b])
			{
                case ' ':
				{
					output_map[b][a] = Cell::Empty;
					break;
				}
				case '#':
				{
					output_map[b][a] = Cell::Wall;
				}
            }
        }
	}
	return output_map;
    }
