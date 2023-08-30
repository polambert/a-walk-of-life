
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "utils.hpp"
#include "World.hpp"

/*

Basic Class Structure

World
Chunk
Tile
Animal
	Human
	Deer
Plant
	Berries
	Tree

*/

int main() {
	World world;
	Camera camera;

	srand(time(nullptr));

	sf::RenderWindow window(sf::VideoMode(sf::Vector2u(1280/2, 720/2)), "nature");

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		world.render(window, camera);

		window.display();
	}

	return 0;
}

