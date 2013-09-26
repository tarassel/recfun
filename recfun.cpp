// recfun.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "pascal.h"
#include "parentheses.h"
#include "countchange.h"
#include <iostream>
//A   #include <string>
#include <iterator>
//   #include <algorithm>
//#include <ostream>


int _tmain(int argc, _TCHAR* argv[])
{
	// CountChange
	std::vector<int> coins;

	int coi1[3] = {4, 1, 2};
	coins.assign(coi1, coi1 + 3);
	countChange(4, coins) == 4;

	int coi4[7] = {500,5,50,100,20,200,10};
	coins.assign(coi4, coi4 + 7);
	countChange(300, coins) == 1022;



//	for (int i=0;i<1000000;++i)
//		pascal(3,11);
//	if (pascal(3,11) == 165)
	char* str1 = "(if (zero? x) max (/ 1 x))";
	char* str2 = "())(";
	std::vector<char> coll;
	coll.assign(str1, str1 + strlen(str1));
//	std::copy(coll.begin(), coll.end(), std::ostream_iterator<char> (std::cout, ""));
//	std::cout << std::endl;
	balance(coll);

	coll.assign(str2, str2 + strlen(str2));
//	std::copy(coll.begin(), coll.end(), std::ostream_iterator<char> (std::cout, ""));
//	std::cout << std::endl;

	if (balance(coll))
		return 0;
	else
		return 1;
}

