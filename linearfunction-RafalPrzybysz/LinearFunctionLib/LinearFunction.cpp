#include "LinearFunction.h"


LinearFunction::LinearFunction(double a, double b) noexcept : a(a), b(b)
{
}

double LinearFunction::getA() const noexcept
{
	return a;
}

double LinearFunction::getB() const noexcept
{
	return b;
}

void LinearFunction::setA(double a) noexcept
{
	this->a = a;
}

void LinearFunction::setB(double b) noexcept
{
	this->b = b;
}

// ZROBIONE dodaæ definicjê operatora - odejmuj¹cego od siebie dwie funkcje

LinearFunction LinearFunction::operator+(LinearFunction const& f) const noexcept
{
	return LinearFunction(a + f.a, b + f.b);
}

LinearFunction LinearFunction::operator-(LinearFunction const& f) const noexcept
{
	return LinearFunction(a - f.a, b - f.b);
}



// ZROBIONE dodaæ definicjê operatora += dodaj¹cego od siebie dwie funkcje

void LinearFunction::operator+=(LinearFunction const& f) noexcept
{
	a += f.a;
	b += f.b;
}

void LinearFunction::operator-=(LinearFunction const& f) noexcept
{
	a -= f.a;
	b -= f.b;
}





// ZROBIONE dodaæ definicjê metody value zwracaj¹cej wartoœæ funkcji dla podanego x
double LinearFunction::value(double x) const noexcept
{
	return a*x+b;
}

// TODO dodaæ definicjê metody intersectionPoint obliczaj¹cej punkt przeciêcia dwóch prostych (bie¿¹cy obiekt oraz parametr f)
// jesli proste siê przecinaj¹ punkt przeciêcia ma byæ zwracany przez parametr p a metoda ma zwracaæ wartoœæ true
// jeœli proste siê nie przecinaj¹ metoda ma zwracaæ wartoœæ false
bool LinearFunction::intersectionPoint(Point& p, LinearFunction const& f) const noexcept
{
	 p.setX((a - f.a) / (f.b - b));
	 p.setY(value(p.getX()));

	 return value(p.getX()) == f.value(p.getX());	
}
