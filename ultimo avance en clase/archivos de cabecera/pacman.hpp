#pragma once
#include <iostream>
#include "header.hpp"
#include "ente.hpp"

class Pacman:public Ente{
    bool animation_over;
	bool dead;
	unsigned short animation_timer;
   unsigned char movimiento;
   	Position position;
    
    
    public:
	pacman();
	bool get_animation_over();
	bool get_dead();
	unsigned char get_direction();
	void reset();
	void set_animation_timer(unsigned short i_animation_timer);
	void set_position(short i_x, short i_y);
	void conmov(unsigned char i_level, std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map);

	Position get_position();
};