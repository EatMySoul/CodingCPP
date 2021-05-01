#include<iostream>


using namespace std;
//Линейные функции? (Алг_лин)
/*5.Определить третью цифру заданного четырехзначного числа*/


int main()
{
	int num;
	cin >> num;

	cout << (num / 10) % 10;

	return 0;
}