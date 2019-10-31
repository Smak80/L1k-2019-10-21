#include <iostream>
#include <Windows.h>
#include "matrix.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int *a;
	int m = 5;
	int n = 6;
	int** matr = nullptr;
	create_matrix(matr, m, n);
	fill_matrix(matr, m, n, 1);
	show_matrix(matr, m,n);
	clear_matrix(matr, m);	
	system("pause");
}