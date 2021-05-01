#include<iostream>
#include<cmath>


using namespace std;
//Линейные функции? (Алг_лин)
/*6.Ввести четырехзначное число.
 Определить сумму и произведение его знаков (цифр).
 Вычислить квадратные и кубические корни
 суммы и произведения.*/


int main()
{
	int num;
	double sum,prod;
	cin >> num;

	sum = num % 10 + (num / 10) % 10 + (num / 100) % 10 + num / 1000;
	prod = (num % 10) * ((num / 10) % 10) * ((num / 100) % 10) * (num / 1000);
	
	cout << "Square root of sum: " << sqrt(sum) << endl;
	cout << "Cubic root of sum: " << pow(sum,1.0/3) << endl;
	cout << "Square root of product: " << sqrt(prod) << endl;
	cout << "Cudic root of product: " << pow(prod,1.0/3) << endl;

	return 0;
}