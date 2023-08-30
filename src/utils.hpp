
#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>

float random(float lower, float upper) {
	float pull = (float) rand() / RAND_MAX;
	return lower + pull * (upper - lower);
}

#endif // UTILS_H

