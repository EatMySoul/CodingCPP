#include<iostream>
#include<cmath>


using namespace std;
//Линейные функции? (Алг_лин)
/*Определить код введенного символа.
Используя значение этого кода в качестве радиуса,
определить площадь круга, длину окружности,
объем шара и площадь вписанного в окружность n-угольника.*/


int main()
{
	int R,N;
	double L,V,S,Sn,PI = 3.14;
	char inChar;

	cin >> inChar;

	R = (int)(inChar);
	S = PI*R*R;
	L = 2*PI*R;
	V = 4*PI*R*R*R/3;

	cout << "input N: ";
	cin >> N;
	if(N > 1)
		Sn = (R*R*N*sin(PI*2/N))/ 2;
	else
		Sn = 0;

	cout << "Radius: " << R << endl;
	cout << "Square: " << S << endl;
	cout << "Circle Length: " << L << endl;
	cout << "Sphere volume: " << V << endl;
	cout << N <<"-gon square: " << Sn << endl;
	
	return 0;
}