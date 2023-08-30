
#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <map>
#include <vector>

#include "Chunk.hpp"
#include "Camera.hpp"

class World {
public:
	std::map<std::string, Chunk> chunks;

	void render(sf::RenderWindow&, Camera);
};

void World::render(sf::RenderWindow& window, Camera camera) {
	// render each chunk
	// create iterator
	for (const auto& pair : chunks) {
		std::string key = pair.first;
		Chunk val = pair.second;

		val.render(window, camera);
	}
}

#endif // WORLD_H
