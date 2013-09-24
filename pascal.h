#pragma once
#include <vector>

int findNextRowToCell(std::vector<int>& row, const int nCol, const int nRow, const int nRowToBuild)
{
	for (int i=1; i<=nCol; ++i)
		row[i] += row[i - 1];

/*	for (int i=0; i<=nCol; ++i)
		printf("%d\t", row[i]);
	printf("\n");*/

	if (nRowToBuild == nRow)
		return row[nCol];
	else
		return findNextRowToCell(row, nCol, nRow, nRowToBuild + 1);
}

// col and row 0 based
int pascal(int nCol, int nRow)
{
	if (nRow == 0 || nCol == 0)
		return 1;

	// Transform triangle coords to rectangle
	nRow = nRow - nCol;

	std::vector<int> row(nCol + 1, 1);
/*	for (int i=0; i<=nCol; ++i)
		printf("%d\t", row[i]);
	printf("\n");*/
	
	return findNextRowToCell(row, nCol, nRow, 1);
}