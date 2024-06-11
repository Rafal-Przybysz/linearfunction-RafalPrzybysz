#include <iostream>
#include "../LinearFunctionLib/Point.h"
#include "../LinearFunctionLib/LinearFunction.h"

int main()
{
	setlocale(LC_ALL, "pl-pl");
	std::cout << "Przecięcia par prostych.\n";
	std::cout << "Proste identyczne ==> koniec programu.\n";
	double a1, b1, a2, b2;
	do
	{
		
		std::cout << "\nParametry prostej #1: a b = ";
		std::cin >> a1 >> b1;
		LinearFunction linearFunction1(a1, b1);

		std::cout << "Parametry prostej #1: a b = ";
		std::cin >> a2 >> b2;
		LinearFunction linearFunction2(a2, b2);
		if (a1 != a2 || b1 != b2)
		{
			Point intersectionPoint;
			if (linearFunction1.intersectionPoint(intersectionPoint, linearFunction2))
				std::cout << "Punkt przecięcia: " << intersectionPoint << std::endl;
			else
				std::cout << "Proste są rownoległe.\n";
		}
	} while (a1 != a2 || b1 != b2);
}
