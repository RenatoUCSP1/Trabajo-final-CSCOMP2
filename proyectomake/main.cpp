#include <SFML/Graphics.hpp>
#include "map.cpp"
#include "sustitucion.cpp"
#include "pacman.cpp"
#include "ghost.cpp"
#include "colision.cpp"
#include "drawtext.cpp"
#include <chrono>
#include "archivos de cabecera/header.hpp"
int main()
{
	bool game_won = 0;
	unsigned lag = 0;
	unsigned char level = 0;
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
	std::array<Position, 4> ghost_positions;
	sf::Event event;
	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * MAP_WIDTH * SCREEN_RESIZE, (FONT_HEIGHT + CELL_SIZE * MAP_HEIGHT) * SCREEN_RESIZE), "Pac-Man", sf::Style::Close);
	window.setView(sf::View(sf::FloatRect(0, 0, CELL_SIZE * MAP_WIDTH, FONT_HEIGHT + CELL_SIZE * MAP_HEIGHT)));
	srand(static_cast<unsigned>(time(0)));

	map = convert_sketch(map_sketch, ghost_positions, pacman);

	previous_time = std::chrono::steady_clock::now();

	while (1 == window.isOpen())
	{
		//Calcula el lag
		unsigned delta_time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - previous_time).count();

		lag += delta_time;

		previous_time += std::chrono::microseconds(delta_time);

		while (FRAME_DURATION <= lag)
		{
			//desciende el lag (no tengo mucha idea de como ayuda esto pero fue util en mis primeras pruebas).
			lag -= FRAME_DURATION;

			while (1 == window.pollEvent(event))
			{
				switch (event.type)
				{
					case sf::Event::Closed:
					{
						window.close();
					}
				}
			}

			if (0 == game_won && 0 == pacman.get_dead())
			{
				game_won = 1;

				pacman.conmov(level, map);

				for (const std::array<Cell, MAP_HEIGHT>& column : map)
				{
					for (const Cell& cell : column)
					{
						if (Cell::Pellet == cell) 
						{
							game_won = 0; //comprueba si el juego se ha ganadoo.

							break;
						}
					}

					if (0 == game_won)
					{
						break;
					}
				}

				if (1 == game_won)
				{
					pacman.set_animation_timer(0);
				}
			}
			else if (1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			{
				game_won = 0;

				if (1 == pacman.get_dead())
				{
					level = 0;
				}
				else
				{
					level++;
				}

				map = convert_sketch(map_sketch,ghost_positions, pacman);


				pacman.reset();
			}

			if (FRAME_DURATION > lag)
			{
				window.clear();

				if (0 == game_won && 0 == pacman.get_dead())
				{
					draw_map(map, window);

					draw_text(0, 0, CELL_SIZE * MAP_HEIGHT, "Level: " + std::to_string(1 + level), window);
				}

				pacman.draw(game_won, window);

				if (1 == pacman.get_animation_over())
				{
					if (1 == game_won)
					{
						draw_text(1, 0, 0, "Next level!", window);
					}
					else
					{
						draw_text(1, 0, 0, "Game over", window);
					}
				}

				window.display();
			}
		}
	}
}