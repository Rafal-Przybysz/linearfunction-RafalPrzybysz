#include <ostream>
#include "Point.h"

Point::Point(double x, double y) noexcept : x(x), y(y)
{
}

// ZROBIONE dodaæ definicjê metod getX i getY umo¿liwiaj¹cych pobieranie wartoœci atrybutów x i y punktu

double Point::getX() const noexcept
{
	return x;
}

double Point::getY() const noexcept
{
	return y;
}

// ZROBIONE dodaæ definicjê metod setX i setY umo¿liwiaj¹cych pobieranie wartoœci atrybutów x i y punktu

double Point::setX(double xx) noexcept
{
	return this->x=xx;
}

double Point::setY(double yy) noexcept
{
	return this->y = yy;
}




double Point::distance(Point const& p) const noexcept
{
	// ZROBIONE dodaæ implementacjê metody distance zwracaj¹cej odleg³oœæ punktu (bie¿¹cy obiekt) od pocz¹tku uk³adu wspó³rzêdnych
	return sqrt((getX() - p.getX()) * (getX() - p.getX()) + (getY() - p.getY()) * (getY() - p.getY()));
}

std::ostream& operator<<(std::ostream& stream, Point const& p)
{
	return stream << "(" << p.getX() << ", " << p.getY() << ")";
}
