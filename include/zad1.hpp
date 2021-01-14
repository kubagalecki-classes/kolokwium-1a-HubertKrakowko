#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle{
	double L;
	double W;
	double R;
	const static double C;
public:
	Tagliatelle(double tL,double tW, double tR):L(tL),W(tW),R(tR) {}
	Tagliatelle() :L(0.5), W(0.5), R(0.5) {}
	double ileMaki(unsigned P) const {
		return(P * L * W * (1. - R) * C);
	}
};