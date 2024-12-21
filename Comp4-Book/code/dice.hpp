#include <random>

class Dice {
 public:
	Dice();
	explicit Dice(unsigned int seed);

	int roll(int num = 1, int size = 6);
 private:
	std::minstd_rand gen;
};
