#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename T>
std::size_t polejSosem(const Tagliatelle& N, T U) {
	return(U.polej(N));
}