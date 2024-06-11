#include <limits>
#include "CppUnitTest.h"
#include "../LinearFunctionLib/Point.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LinearFunctionUnitTest
{
	TEST_CLASS(PointUnitTest)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Point p( 12.45, -9.01);
			Assert::AreEqual(12.45, p.getX(), 0.01);
			Assert::AreEqual(-9.01, p.getY(), 0.01);
		}
		TEST_METHOD(ConstructorParameterless)
		{
			Point p;
			Assert::AreEqual(0.0, p.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(0.0, p.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(CopyConstructor)
		{
			Point p1(-312.35, 19.51);
			Point p(p1);
			Assert::AreEqual(-312.35, p.getX(), 0.01);
			Assert::AreEqual(19.51, p.getY(), 0.01);
		}
		TEST_METHOD(AssignmentOperator)
		{
			Point p1(-31.35, 14.15);
			Point p2(0.0, 0.0);
			Point p3(0.0, 0.0);
			p3 = p2 = p1;
			Assert::AreEqual(-31.35, p2.getX(), 0.01);
			Assert::AreEqual(14.15, p2.getY(), 0.01);
			Assert::AreEqual(-31.35, p3.getX(), 0.01);
			Assert::AreEqual(14.15, p3.getY(), 0.01);
		}
		TEST_METHOD(getX)
		{
			Point p(431.82, 4.29);
			Assert::AreEqual(431.82, p.getX(), 0.01);
		}
		TEST_METHOD(getY)
		{
			Point p(431.82, 4.29);
			Assert::AreEqual(4.29, p.getY(), 0.01);
		}
		TEST_METHOD(setX)
		{
			Point p(1.0, 2.0);
			p.setX(39.67);
			Assert::AreEqual(39.67, p.getX(), 0.01);
			Assert::AreEqual(2.0, p.getY(), 0.01);
		}
		TEST_METHOD(setY)
		{
			Point p(1.0, 2.0);
			p.setY(-73.47);
			Assert::AreEqual(1.0, p.getX(), 0.01);
			Assert::AreEqual(-73.47, p.getY(), 0.01);
		}
		TEST_METHOD(distance)
		{
			Point p1(1.0, 2.0);
			Point p2(4.0, -3.0);
			Assert::AreEqual( 5.83, p1.distance(p2), 0.01);
		}
	};
}
