#include "stdafx.h"
#include "CppUnitTest.h"
#include "../pascal.h"
#include "../parentheses.h"
#include "../countchange.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(PascalTest)
	{
	public:
		
		TEST_METHOD(PascalTest1)
		{
			Assert::AreEqual(pascal(0,2), 1);
			Assert::AreEqual(pascal(1,2), 2); 
			Assert::AreEqual(pascal(1,3), 3);
			Assert::AreEqual(pascal(3,11), 165);
			Assert::AreEqual(pascal(8,0), 1);
			Assert::AreEqual(pascal(7,9), 36);
		}
	};

	TEST_CLASS(ParenthesesTest)
	{
	public:
		
		TEST_METHOD(ParenthesesTest1)
		{
			char* str1 = "(if (zero? x) max (/ 1 x))";
			std::vector<char> coll;
			coll.assign(str1, str1 + strlen(str1));
			Assert::IsTrue(balance(coll));

			str1 = "I told him (that it’s not (yet) done). (But he wasn’t listening)";
			coll.assign(str1, str1 + strlen(str1));
			Assert::IsTrue(balance(coll));

			str1 = ":-)";
			coll.assign(str1, str1 + strlen(str1));
			Assert::IsFalse(balance(coll));

			str1 = "())(";
			coll.assign(str1, str1 + strlen(str1));
			Assert::IsFalse(balance(coll));
		}
	};

	TEST_CLASS(CoinsTest)
	{
	public:
		
		TEST_METHOD(CoinsTest1)
		{
			std::vector<int> coins;

			int coi1[2] = {1, 2};
			coins.assign(coi1, coi1 + 2);
			Assert::AreEqual(countChange(4, coins), 3);

			int coi2[7] = {5,10,20,50,100,200,500};
			coins.assign(coi2, coi2 + 7);
			Assert::AreEqual(countChange(300, coins), 1022);

			int coi3[7] = {5,10,20,50,100,200,500};
			coins.assign(coi3, coi3 + 7);
			Assert::AreEqual(countChange(301, coins), 0);

			int coi4[7] = {500,5,50,100,20,200,10};
			coins.assign(coi4, coi4 + 7);
			Assert::AreEqual(countChange(300, coins), 1022);

			int coi5[3] = {1,2,5};
			coins.assign(coi5, coi5 + 3);
			Assert::AreEqual(countChange(7, coins), 6);
		}
	};

}