#pragma once
#include <vector>

bool checkBalance(std::vector<char>::const_iterator& pos, std::vector<char>::const_iterator& end, int nOpenedCount)
{
	if (pos == end)
		return nOpenedCount == 0;
	else if (*pos == '(')
		return checkBalance(++pos, end, ++nOpenedCount);
	else if (*pos == ')')
	{
		if (nOpenedCount > 0)
			return checkBalance(++pos, end, --nOpenedCount);
		else
			return false;
	}
	else
		return checkBalance(++pos, end, nOpenedCount);
}

bool balance(const std::vector<char>& coll)
{
	std::vector<char>::const_iterator pos = coll.begin();
	std::vector<char>::const_iterator end = coll.end();

	return checkBalance(pos, end, 0);
}