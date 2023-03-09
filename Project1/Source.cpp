#include <SFML/Graphics.hpp>
#include "brick.h"
#include "ball.h"

//instantiate some bricks
brick b1(100, 100);
brick b2(200, 100);
brick b3(300, 100);
brick b4(400, 100);
brick b5(500, 100);
brick b6(600, 100);
brick b7(150, 200);
brick b8(250, 200);
brick b9(350, 200);
brick b10(450, 200);
brick b11(550, 200);

ball ba(400, 700);

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Breakout"); //set up screen
	sf::RectangleShape rect;
	sf::CircleShape circle;

	while (window.isOpen())//GAME LOOP--------------------------------
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		//physics section------------------------------


		//render section-------------------------------
		window.clear();

		//draw bricks
		b1.draw(window);
		b2.draw(window);
		b3.draw(window);
		b4.draw(window);
		b5.draw(window);
		b6.draw(window);
		b7.draw(window);
		b8.draw(window);
		b9.draw(window);
		b10.draw(window);
		b11.draw(window);

		ba.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main
