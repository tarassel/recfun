#include "stdafx.h"
#include "CppUnitTest.h"
#include "../pascal.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(pascal(0,2), 1);
			Assert::AreEqual(pascal(1,2), 2); 
			Assert::AreEqual(pascal(1,3), 3);
			Assert::AreEqual(pascal(3,11), 165);
			Assert::AreEqual(pascal(8,0), 1);
			Assert::AreEqual(pascal(7,9), 36);
		}

	};
}