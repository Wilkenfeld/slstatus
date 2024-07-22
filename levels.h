#ifndef LEVELS_H
#define LEVELS_H
#include<stddef.h>

struct level {
	const size_t level;
	const char *fmt;
};

int find_closest_level(const struct level levels[], const int len, const size_t value);

#endif
