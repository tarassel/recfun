#include "stdafx.h"
#include "CppUnitTest.h"
#include "../pascal.h"
#include "../parentheses.h"

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
}