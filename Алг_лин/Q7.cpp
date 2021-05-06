#include<iostream>
#include<cmath>

using namespace std;
//Линейные функции? (Алг_лин)
/*7.Для заданного трехзначного числа вычислить
среднее арифметическое и среднее геометрическое цифр,
образующих это число*/


int main()
{
	int num;
	double midSum,midProd;

	cin >> num;
	midSum = (num % 10 + (num / 10) % 10 + num / 100 ) / 3;
	midProd = pow( (num % 10) * ((num / 10) % 10) * (num / 100), 1.0/3.0);

	cout << "Среднее арифметическое: " << midSum << endl;
	cout << "Среднее геометрическое: " << midProd << endl;
	return 0;
}