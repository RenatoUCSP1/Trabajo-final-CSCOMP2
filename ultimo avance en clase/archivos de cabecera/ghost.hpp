#ifndef _GHOST_HPP_
#define _GHOST_HPP_
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Consumibles.hpp"
#include "ente.hpp"
#include "header.hpp"
class Ghost: public Ente
{
public:
	sf::CircleShape Top;
	sf::RectangleShape Bottom;
	//direction
	float speed = 0.4;
	int X, Y;
	int arr[18][21];
	Ghost();
	Ghost(float x, float y, sf::Color a);
	virtual ~Ghost();
	void initBody(float x, float y, sf::Color a);
	virtual void draw(sf::RenderTarget& target, Vector2f& direction);
	void update(Vector2f &direction);
	void render(sf::RenderTarget& target, Vector2f& direction);
	bool wall(int a, int b);
	void mapArray(vector<vector<Consumibles*>> map, int x,int y);
	void pathfinder(int x,int y);
};
#endif