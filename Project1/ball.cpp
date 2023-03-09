#include "ball.h"

ball::ball(int x, int y) {
	xpos = x;
	ypos = y;

}

void ball(sf::RenderWindow& window, int x, int y) {
	sf::CircleShape circle;
	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(x, y);
	window.draw(circle);
}