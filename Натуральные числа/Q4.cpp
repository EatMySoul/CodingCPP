#include<iostream>


using namespace std;
//ОБРАБОТКА   НАТУРАЛЬНОГО   ЧИСЛОВОГО    РЯДА.
//Найти по заданному натуральному N сумму  1! + 2! + 3! + ... + N!,  где А!=1*2*3*...*А.



int main()
{
	int N , sum = 0;
	cin >> N;

	int fact = 1;
	
	for(int i = 1; i <= N; i++)
	{
		fact = fact*i;
		sum = sum + fact;
	}
	cout << sum;
	return 0;
}