#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& vec) {
	double M=0;
	int c = vec.size();
	for (auto n : vec) {
		M = M + (n.ileMaki(c));
		c--;
	}
	if (M > 100) {
		throw(10);
	}
	else if (M > 50) {
		throw(double)(0.5);
	}
	else {
		return M;
	}
}