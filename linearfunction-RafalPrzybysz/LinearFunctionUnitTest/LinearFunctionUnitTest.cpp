#include "CppUnitTest.h"
#include "../LinearFunctionLib/LinearFunction.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LinearFunctionUnitTest
{
	TEST_CLASS(LinearFunctionUnitTest)
	{
	public:
		TEST_METHOD(Constructor)
		{
			LinearFunction f(1.0, 2.0);
			Assert::AreEqual(1.0, f.getA(), 0.01);
			Assert::AreEqual(2.0, f.getB(), 0.01);
		}
		TEST_METHOD(CopyConstructor)
		{
			LinearFunction f1(4.0, -8.0);
			LinearFunction f(f1);
			Assert::AreEqual(4.0, f.getA(), 0.01);
			Assert::AreEqual(-8.0, f.getB(), 0.01);
		}
		TEST_METHOD(AssignmentOperator)
		{
			LinearFunction f1(-5.0, -3.0);
			LinearFunction f2(0.0, 0.0);
			LinearFunction f3(0.0, 0.0);
			f3 = f2 = f1;
			Assert::AreEqual(-5.0, f2.getA(), 0.01);
			Assert::AreEqual(-3.0, f2.getB(), 0.01);
			Assert::AreEqual(-5.0, f3.getA(), 0.01);
			Assert::AreEqual(-3.0, f3.getB(), 0.01);
		}
		TEST_METHOD(getA)
		{
			LinearFunction f(-78.40, 42.59);
			Assert::AreEqual(-78.40, f.getA(), 0.01);
		}
		TEST_METHOD(getB)
		{
			LinearFunction f(91.03, 26.45);
			Assert::AreEqual(26.45, f.getB(), 0.01);
		}
		TEST_METHOD(setA)
		{
			LinearFunction f(1.0, 2.0);
			f.setA( 54.27);
			Assert::AreEqual(54.27, f.getA(), 0.01);
			Assert::AreEqual(2.00, f.getB(), 0.01);
		}
		TEST_METHOD(setB)
		{
			LinearFunction f(1.0, 2.0);
			f.setB(28.27);
			Assert::AreEqual(1.0, f.getA(), 0.01);
			Assert::AreEqual(28.27, f.getB(), 0.01);
		}
		TEST_METHOD(operatorPlus)
		{
			LinearFunction f1(3.0, 5.0);
			LinearFunction f2(-4.0, 7.0);
			LinearFunction f(0.0, 0.0);
			f = f1 + f2;
			Assert::AreEqual(-1.0, f.getA(), 0.01);
			Assert::AreEqual(12.0, f.getB(), 0.01);
		}
		TEST_METHOD(operatorMinus)
		{
			LinearFunction f1(3.0, 5.0);
			LinearFunction f2(-4.0, 7.0);
			LinearFunction f(0.0, 0.0);
			f = f1 - f2;
			Assert::AreEqual(7.0, f.getA(), 0.01);
			Assert::AreEqual(-2.0, f.getB(), 0.01);
		}
		TEST_METHOD(operatorPlusEqual)
		{
			LinearFunction f(3.0, 5.0);
			LinearFunction f1(-4.0, 7.0);
			f += f1;
			Assert::AreEqual(-1.0, f.getA(), 0.01);
			Assert::AreEqual(12.0, f.getB(), 0.01);
		}
		TEST_METHOD(operatorMinusEqual)
		{
			LinearFunction f(3.0, 5.0);
			LinearFunction f1(-4.0, 7.0);
			f -= f1;
			Assert::AreEqual(7.0, f.getA(), 0.01);
			Assert::AreEqual(-2.0, f.getB(), 0.01);
		}
		TEST_METHOD(value)
		{
			LinearFunction f(1.0, 2.0);
			Assert::AreEqual(-2.0, f.value(-4.0), 0.01);
		}
		TEST_METHOD(intersectionPointTrue)
		{
			LinearFunction f1(3.0, 2.0);
			LinearFunction f2(1.0, 4.0);
			Point p;
			Assert::IsTrue(f1.intersectionPoint(p, f2));
			Assert::AreEqual(1.0, p.getX(), 0.01);
			Assert::AreEqual(5.0, p.getY(), 0.01);
			
		}
		TEST_METHOD(intersectionPointFalse)
		{
			LinearFunction f1(-5.0, 2.0);
			LinearFunction f2(-5.0, 4.0);
			Point p;
			Assert::IsFalse(f1.intersectionPoint(p, f2));
			Assert::AreEqual(0.0, p.getX(), 0.01);
			Assert::AreEqual(2.0, p.getY(), 0.01);

		}
	};
}
