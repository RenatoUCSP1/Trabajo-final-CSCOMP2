<<<<<<< HEAD
#pragma once
constexpr unsigned char CELL_SIZE = 16;
constexpr unsigned char MAP_HEIGHT = 21;
constexpr unsigned char MAP_WIDTH = 21;
constexpr unsigned char SCREEN_RESIZE = 2;
constexpr unsigned short FRAME_DURATION = 16667;
constexpr unsigned char FONT_HEIGHT = 16;
constexpr unsigned char PACMAN_SPEED=2;
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
=======
#pragma once
constexpr unsigned char CELL_SIZE = 16;
constexpr unsigned char MAP_HEIGHT = 21;
constexpr unsigned char MAP_WIDTH = 21;
constexpr unsigned char SCREEN_RESIZE = 2;
constexpr unsigned short FRAME_DURATION = 16667;
constexpr unsigned char FONT_HEIGHT = 16;
constexpr unsigned char PACMAN_SPEED=2;
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
>>>>>>> c47d47475af4dc66bc9c2d0a3693ae55ffcb6e7f
};