
#ifndef CAMERA_H
#define CAMERA_H

class Camera {
public:
	float x = 0;
	float y = 0;
	float zoom = 1;

	sf::Vector2f worldToScreen(sf::Vector2f world);
	sf::Vector2f screenToWorld(sf::Vector2f screen);
};

sf::Vector2f Camera::worldToScreen(sf::Vector2f world) {
	sf::Vector2f screen(world.x - x, world.y - y);
	return screen;
}

sf::Vector2f Camera::screenToWorld(sf::Vector2f screen) {
	sf::Vector2f world(screen.x + x, screen.y + y);
	return world;
}

#endif

