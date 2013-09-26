#pragma once
#include <vector>

// 4: {1, 2} == 3: 1+1+1+1, 1+1+2, 2+2

int countChangeIter(int nMoney, std::vector<int>::const_iterator pos, std::vector<int>::const_iterator end)
{
	if (pos == end)
		return 0;
	else if (nMoney - *pos == 0)
		return 1 + countChangeIter(nMoney, pos + 1, end);
	else if (nMoney - *pos > 0)
		return countChangeIter(nMoney - *pos, pos, end) + countChangeIter(nMoney, pos + 1, end);
	else //if (nMoney - *pos < 0)
		return countChangeIter(nMoney, ++pos, end);
}

int countChange(int nMoney, const std::vector<int>& coins)
{
	if (nMoney == 0)
		return 0;

	return countChangeIter(nMoney, coins.cbegin(), coins.cend());
}
