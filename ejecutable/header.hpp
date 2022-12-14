#ifndef _HEADER_HPP_
#define _HEADER_HPP_
constexpr unsigned char CELL_SIZE = 16;
constexpr unsigned char MAP_HEIGHT = 21;
constexpr unsigned char MAP_WIDTH = 21;
constexpr unsigned char SCREEN_RESIZE = 2;

constexpr unsigned short FRAME_DURATION = 16667;
enum Cell
{
	Empty,
	Wall
};
struct Position
{
    unsigned short x;
    unsigned short y;
};
#endif