// recfun.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "pascal.h"

int _tmain(int argc, _TCHAR* argv[])
{
	for (int i=0;i<1000000;++i)
		pascal(3,11);
	if (pascal(3,11) == 165)
		return 0;
	else
		return 1;
}

