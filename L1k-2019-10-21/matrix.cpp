#include "matrix.h"
#include <iostream>
using namespace std;
void show_matrix(int** matr, int m, int n)
{
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout << matr[i][j] << " ";		
		}
		cout << endl;
	}
}

void create_matrix(int**& matr, int m, int n)
{
	matr = new int*[m];
	for (int i = 0; i<m; i++)
	{
		matr[i] = new int[n];
	}
}

void fill_matrix(int** matr, int m, int n, int fill_type)
{
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			switch (fill_type)
			{
				case 1: matr[i][j] = rand();
				default: matr[i][j] = 0;
			}
		}
	}
}

void clear_matrix(int**& matr, int m)
{
	for (int i = 0; i<m; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
	matr = nullptr;
}