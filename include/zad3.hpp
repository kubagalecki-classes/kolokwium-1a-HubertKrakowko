#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename T>
size_t polejSosem(const Tagliatelle* N, T* U) {
	return(polej(U, N));
}