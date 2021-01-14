#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

class Penne : public Makaron {
	double ileMaki(unsigned a) const override { return (double)a; }
};
// tutaj definicja metody gotujMakaron
