#include "pch.h"
#include "CppUnitTest.h"
#include "..//PPOIS_Rectangle/Rectangle.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTest
{
	TEST_CLASS(RectangleTest)
	{
	public:
		TEST_METHOD(Testchange_size)
		{
			Rectangle r(0, 0, 10, 10);
			r.change_size(1, 2, 3, 4);
			Assert::AreEqual(1, r.get_x1());
			Assert::AreEqual(12, r.get_x2());
			Assert::AreEqual(3, r.get_y1());
			Assert::AreEqual(14, r.get_y2());
		}

		TEST_METHOD(Testmove) {
			Rectangle r(0, 0, 10, 10);
			r.move(1, 2);
			Assert::AreEqual(1, r.get_x1());
			Assert::AreEqual(11, r.get_x2());
			Assert::AreEqual(2, r.get_y1());
			Assert::AreEqual(12, r.get_y2());
		}

		TEST_METHOD(PreIncrementTest)
		{
			Rectangle rectangle(1, 2, 3, 4);
			++rectangle;
			Assert::AreEqual(4, rectangle.get_x2());
			Assert::AreEqual(5, rectangle.get_y2());
		}

		TEST_METHOD(PostIncrementTest)
		{
			Rectangle rectangle(5, 6, 9, 10);
			rectangle++;
			Assert::AreEqual(10, rectangle.get_x2());
			Assert::AreEqual(11, rectangle.get_y2());
		}

		TEST_METHOD(PreDecrementTest)
		{
			Rectangle rectangle(1, 2, 3, 4);
			--rectangle;
			Assert::AreEqual(2, rectangle.get_x2());
			Assert::AreEqual(3, rectangle.get_y2());
		}

		TEST_METHOD(PostDecrementTest)
		{
			Rectangle rectangle(5, 6, 8, 9);
			rectangle--;
			Assert::AreEqual(7, rectangle.get_x2());
			Assert::AreEqual(8, rectangle.get_y2());
		}

		TEST_METHOD(TestOperatorPlus)
		{
			Rectangle r1(0, 0, 5, 5);
			Rectangle r2(5, 5, 7, 7);
			Rectangle r3 = r1 + r2;
			Assert::AreEqual(0, r3.get_x1());
			Assert::AreEqual(0, r3.get_y1());
			Assert::AreEqual(7, r3.get_x2());
			Assert::AreEqual(7, r3.get_y2());
		}

		TEST_METHOD(TestOperatorPlusEquals)
		{
			Rectangle r1(0, 2, 3, 3);
			Rectangle r2(2, 3, 5, 6);
			r1 += r2;
			Assert::AreEqual(0, r1.get_x1());
			Assert::AreEqual(2, r1.get_y1());
			Assert::AreEqual(5, r1.get_x2());
			Assert::AreEqual(6, r1.get_y2());
		}

		TEST_METHOD(TestOperatorMinus)
		{
			Rectangle r1(1, 2, 3, 4);
			Rectangle r2(5, 6, 7, 8);
			Rectangle r3 = r1 - r2;
			Assert::AreEqual(5, r3.get_x1());
			Assert::AreEqual(6, r3.get_y1());
			Assert::AreEqual(3, r3.get_x2());
			Assert::AreEqual(4, r3.get_y2());
		}

		TEST_METHOD(TestOperatorMinusEquals)
		{
			Rectangle r1(2, 4, 7, 6);
			Rectangle r2(6, 3, 6, 8);
			r1 -= r2;
			Assert::AreEqual(6, r1.get_x1());
			Assert::AreEqual(4, r1.get_y1());
			Assert::AreEqual(6, r1.get_x2());
			Assert::AreEqual(6, r1.get_y2());
		}
	};
}
