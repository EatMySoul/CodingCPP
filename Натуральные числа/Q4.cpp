#include<iostream>


using namespace std;
//ОБРАБОТКА   НАТУРАЛЬНОГО   ЧИСЛОВОГО    РЯДА.
//Найти по заданному натуральному N сумму  1! + 2! + 3! + ... + N!,  где А!=1*2*3*...*А.



int main()
{
	int N , sum = 0;
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		int fact = 1;
		for(int j = 1; j <= i; j++)
		{
			fact = fact*j;
		}
		sum = sum + fact;
	}
	cout << sum;
	return 0;
}