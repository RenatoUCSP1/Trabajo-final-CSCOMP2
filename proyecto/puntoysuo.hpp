<<<<<<< HEAD
#include <Sfml/SFML/graphics>
class puntos{
public:
sf::CircleShape getDot()
{
	sf::CircleShape dot;
	dot.setFillColor(sf::Color::White);
	dot.setRadius(4);
	dot.setOrigin(4, 4);
	return dot;
}

sf::CircleShape getSuperdot()
{
	sf::CircleShape superdot;
	superdot.setFillColor(sf::Color(250, 184, 152));
	superdot.setRadius(8);
	superdot.setOrigin(8, 8);
	return superdot;
}
=======
#include <Sfml/SFML/graphics>
class puntos{
public:
sf::CircleShape getDot()
{
	sf::CircleShape dot;
	dot.setFillColor(sf::Color::White);
	dot.setRadius(4);
	dot.setOrigin(4, 4);
	return dot;
}

sf::CircleShape getSuperdot()
{
	sf::CircleShape superdot;
	superdot.setFillColor(sf::Color(250, 184, 152));
	superdot.setRadius(8);
	superdot.setOrigin(8, 8);
	return superdot;
}
>>>>>>> c47d47475af4dc66bc9c2d0a3693ae55ffcb6e7f
};