<<<<<<< HEAD
#include <SFML/Graphics.hpp>
#include <chrono>
#include"Funcion_dibujar.h"
#include"dependencias.h"
#include"boceto.h"
#include <array>
using namespace std;
int main(){
	unsigned lag =0;
	std::chrono::time_point<std::chrono::steady_clock> previous_time;
	std::array<std::string, MAP_HEIGHT> map_sketch = {
		" ################### ",
		" #........#........# ",
		" #o##.###.#.###.##o# ",
		" #.................# ",
		" #.##.#.#####.#.##.# ",
		" #....#...#...#....# ",
		" ####.### # ###.#### ",
		"    #.#   0   #.#    ",
		"#####.# ##=## #.#####",
		"     .  #123#  .     ",
		"#####.# ##### #.#####",
		"    #.#       #.#    ",
		" ####.# ##### #.#### ",
		" #........#........# ",
		" #.##.###.#.###.##.# ",
		" #o.#.....P.....#.o# ",
		" ##.#.#.#####.#.#.## ",
		" #....#...#...#....# ",
		" #.######.#.######.# ",
		" #.................# ",
		" ################### "
	};
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> map{};
	sf::Event event;
	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * MAP_WIDTH * SCREEN_RESIZE, (FONT_HEIGHT + CELL_SIZE * MAP_HEIGHT) * SCREEN_RESIZE), "Pac-Man", sf::Style::Close);
	window.setView(sf::View(sf::FloatRect(0, 0, CELL_SIZE * MAP_WIDTH, FONT_HEIGHT + CELL_SIZE * MAP_HEIGHT)));
	previous_time = std::chrono::steady_clock::now();
	while (1 == window.isOpen()){
		unsigned delta_time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - previous_time).count();
		lag += delta_time;
		previous_time +=std ::chrono::microseconds(delta_time);
		while(FRAME_DURATION<= lag){
			lag-= FRAME_DURATION;
			while (1 == window.pollEvent(event)){
				switch(event.type){
					case sf::Event::Closed:{
						window.close();
					}
				}
			}

		if (FRAME_DURATION > lag){
			window.clear(sf::Color::Black);
			draw_map(map, window);
			window.display();
	}
	}
	}
return 0;

			
}
=======
#include <SFML/Graphics.hpp>
#include <chrono>
#include"Funcion_dibujar.h"
#include"dependencias.h"
#include"boceto.h"
#include <array>
using namespace std;
int main(){
	unsigned lag =0;
	std::chrono::time_point<std::chrono::steady_clock> previous_time;
	std::array<std::string, MAP_HEIGHT> map_sketch = {
		" ################### ",
		" #........#........# ",
		" #o##.###.#.###.##o# ",
		" #.................# ",
		" #.##.#.#####.#.##.# ",
		" #....#...#...#....# ",
		" ####.### # ###.#### ",
		"    #.#   0   #.#    ",
		"#####.# ##=## #.#####",
		"     .  #123#  .     ",
		"#####.# ##### #.#####",
		"    #.#       #.#    ",
		" ####.# ##### #.#### ",
		" #........#........# ",
		" #.##.###.#.###.##.# ",
		" #o.#.....P.....#.o# ",
		" ##.#.#.#####.#.#.## ",
		" #....#...#...#....# ",
		" #.######.#.######.# ",
		" #.................# ",
		" ################### "
	};
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> map{};
	sf::Event event;
	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * MAP_WIDTH * SCREEN_RESIZE, (FONT_HEIGHT + CELL_SIZE * MAP_HEIGHT) * SCREEN_RESIZE), "Pac-Man", sf::Style::Close);
	window.setView(sf::View(sf::FloatRect(0, 0, CELL_SIZE * MAP_WIDTH, FONT_HEIGHT + CELL_SIZE * MAP_HEIGHT)));
	previous_time = std::chrono::steady_clock::now();
	while (1 == window.isOpen()){
		unsigned delta_time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - previous_time).count();
		lag += delta_time;
		previous_time +=std ::chrono::microseconds(delta_time);
		while(FRAME_DURATION<= lag){
			lag-= FRAME_DURATION;
			while (1 == window.pollEvent(event)){
				switch(event.type){
					case sf::Event::Closed:{
						window.close();
					}
				}
			}

		if (FRAME_DURATION > lag){
			window.clear(sf::Color::Black);
			draw_map(map, window);
			window.display();
	}
	}
	}
return 0;

			
}
>>>>>>> c47d47475af4dc66bc9c2d0a3693ae55ffcb6e7f
