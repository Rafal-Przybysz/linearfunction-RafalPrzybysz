#pragma once
#include "Point.h"

class LinearFunction
{
private:
	double a;
	double b;
public:
	LinearFunction(double a, double b) noexcept;
	LinearFunction(LinearFunction const& f) noexcept = default;
	LinearFunction & operator=(LinearFunction const& f) noexcept = default;

	double getA() const noexcept;
	double getB() const noexcept;

	void setA(double a) noexcept;
	void setB(double b) noexcept;

	LinearFunction operator+(LinearFunction const& f) const noexcept;

	// ZROBIONE dodaæ deklaracjê operatora - odejmuj¹cego od siebie dwie funkcje
	LinearFunction operator-(LinearFunction const& f) const noexcept;

	// ZROBIONE dodaæ deklaracjê operatora += dodaj¹cego od siebie dwie funkcje
	void operator+=(LinearFunction const& f) noexcept;

	void operator-=(LinearFunction const& f) noexcept;

	double value(double x) const noexcept;

	bool intersectionPoint(Point & p, LinearFunction const& f) const noexcept;
};

