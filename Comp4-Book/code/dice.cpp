#include "dice.hpp"

#include <chrono>

Dice::Dice():
	Dice(std::chrono::system_clock::now().time_since_epoch().count()) {}
Dice::Dice(unsigned int seed): gen(seed) {}

int Dice::roll(int num = 1, int size = 6) {
	int sum = 0;
	std::uniform_int_distribution<int> dist(1, size);
	for (int i = 0; i < num; i++) {
		sum += dist(gen);
	}
	return sum;
}
