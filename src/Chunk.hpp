
#ifndef CHUNK_H
#define CHUNK_H

#include "Tile.hpp"
#include "Camera.hpp"

class Chunk {
public:
	// width and height in tiles
	static const int CHUNK_SIZE = 16;

	// tiles are a 1d array
	Tile tiles[CHUNK_SIZE * CHUNK_SIZE];

	void render(sf::RenderWindow& window, Camera camera);
};

void Chunk::render(sf::RenderWindow& window, Camera camera) {
	// render all of the tiles in the chunk
	
}

#endif

