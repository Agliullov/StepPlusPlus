// StepsPlusPus.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int mas[] = { 1, 2, -2, 4, -1, -2, 5 };

int met1(int mas[], int &sum, int i);
int met2(int mas[], int i);

int main()
{
	int sum = 0;
	int t = met1(mas, sum, 0);
	t = met1(mas, sum, t);
	cout << sum << " " << t;
	cin.get();
}

int met1(int mas[], int &sum, int i)
{
	if (mas[i] > mas[i + 1])
	{
		sum += mas[i];
		return i;
	}
	else 
	{
		sum += mas[i+1];
		return i+1;
	}
}

int met2(int mas[], int i)
{

	return 0;
}
