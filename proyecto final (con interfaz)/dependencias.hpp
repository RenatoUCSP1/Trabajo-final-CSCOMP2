#pragma once
constexpr unsigned char CELL_SIZE = 16;
constexpr unsigned char MAP_HEIGHT = 21;
constexpr unsigned char MAP_WIDTH = 21;
constexpr unsigned char SCREEN_RESIZE = 2;
constexpr unsigned short FRAME_DURATION = 16667;
constexpr unsigned char FONT_HEIGHT = 16;
enum Cell
{
	Door,
	Empty,
	Energizer,
	Pellet,
	Wall
};
struct Position
{
	short x;
	short y;
};