#include<iostream>


using namespace std;
//ОБРАБОТКА   НАТУРАЛЬНОГО   ЧИСЛОВОГО    РЯДА.
//2.Найти все трехзначные числа, сумма цифр которых равна заданному числу В.


int main()
{
	int B;
	cin >> B;
	for(int i = 100; i < 1000; i++)
	{
		if((i % 10 + (i / 10) % 10 + i / 100) == B)
			cout << i << endl:
	}
	return 0;
}