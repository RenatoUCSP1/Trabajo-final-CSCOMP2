<<<<<<< HEAD
#include <array>
#include"dependencias.h"
#include <SFML/Graphics.hpp>
std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> convert_sketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, std::array<Position, 4>);
std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> convert_sketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, std::array<Position, 4>){
std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> output_map{};
	for (unsigned char a = 0; a < MAP_HEIGHT; a++)	{
		for (unsigned char b = 0; b < MAP_WIDTH; b++){
        switch (i_map_sketch[a][b]){
        		case ' ':
				{
					output_map[b][a] = Cell::Empty;

					break;
				}
                case '#':
				{
					output_map[b][a] = Cell::Wall;

					break;
				}
}
}
}
return output_map;
}
=======
#include <array>
#include"dependencias.h"
#include <SFML/Graphics.hpp>
std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> convert_sketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, std::array<Position, 4>);
std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> convert_sketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, std::array<Position, 4>){
std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> output_map{};
	for (unsigned char a = 0; a < MAP_HEIGHT; a++)	{
		for (unsigned char b = 0; b < MAP_WIDTH; b++){
        switch (i_map_sketch[a][b]){
        		case ' ':
				{
					output_map[b][a] = Cell::Empty;

					break;
				}
                case '#':
				{
					output_map[b][a] = Cell::Wall;

					break;
				}
}
}
}
return output_map;
}
>>>>>>> c47d47475af4dc66bc9c2d0a3693ae55ffcb6e7f
