#include "levels.h"
#include "util.h"

int
find_closest_level(const struct level levels[], const int len, const size_t value) {
	int i = 0, closest = 0, found = 0;
	while (i < len) {
		if (levels[i].level >= value) {
			if (levels[i].level <= levels[closest].level) {
				found = 1;	
				closest = i;
			}
		}

		i++;
	}

	return found ? closest : -1;
} 
