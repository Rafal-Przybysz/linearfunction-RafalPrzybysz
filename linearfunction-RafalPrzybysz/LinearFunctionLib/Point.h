#pragma once
#include <ostream>

class Point
{
private:
	double x = 0.0;
	double y = 0.0;
public:
	Point(double x, double y) noexcept;
	Point() noexcept = default;
	Point(Point const& p) noexcept = default;
	Point& operator=(Point const& p) noexcept = default;

	// ZROBIONE dodaæ deklaracjê metod getX i getY umo¿liwiaj¹cych pobieranie wartoœci atrybutów x i y punktu
	double getX() const noexcept;

	double getY() const noexcept;

	// ZROBIONE dodaæ deklaracjê metod setX i setY umo¿liwiaj¹cych pobieranie wartoœci atrybutów x i y punktu
	double setX(double xx) noexcept;

	double setY(double yy) noexcept;

	double distance(Point const& p) const noexcept;
};

std::ostream& operator<<(std::ostream& stream, Point const& p);