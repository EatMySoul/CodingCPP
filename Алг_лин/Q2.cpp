#include<iostream>
#include<cmath>


using namespace std;
//Линейные функции? (Алг_лин)
/*2.Определить площадь круга, длину окружности и объем шара,
используя  в качестве радиуса сумму знаков трехзначного числа. 
*/


int main()
{
	int R,num;
	double S,L,V,PI = 3.14;
	cin >> num;

	R = num % 10 + num / 100 + (num / 10) % 10;
	S = PI*R*R;
	L = 2*PI*R;
	V = 4*PI*R*R*R/3;

	cout << "Radius: " << R << endl;
	cout << "Square: " << S << endl;
	cout << "Circle Length: " << L << endl;
	cout << "Sphere volume: " << V << endl;

	return 0;
}