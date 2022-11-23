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
                case '.':
                {
                    output_map[b][a] = Cell::Pellet;

					break;
                }
                   case '0':
                {
                    Posicion_ghost[0].x = CELL_SIZE*b;
                    Posicion_ghost[0].y = CELL_SIZE*a;

					break;
                }
                   case '1':
                {
                    Posicion_ghost[1].x = CELL_SIZE*b;
                    Posicion_ghost[1].y = CELL_SIZE*a;

					break;
                }
                   case '2':
                {
                    Posicion_ghost[2].x = CELL_SIZE*b;
                    Posicion_ghost[2].y = CELL_SIZE*a;

					break;
                }
                   case '3':
                {
                    Posicion_ghost[3].x = CELL_SIZE*b;
                    Posicion_ghost[3].y = CELL_SIZE*a;

					break;
                }
}
}
}
return output_map;
}
