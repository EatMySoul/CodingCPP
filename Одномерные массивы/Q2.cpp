#include<iostream>

using namespace std;
//ОБРАБОТКА  ОДНОМЕРНЫХ  МАССИВОВ  (ВЕКТОРОВ)
/*2.Вычислить среднее арифметическое положительных элементов массива F(M)*/

int main()
{
	int M, count = 0;
	double sum = 0;
	cin >> M;
	int F[M];

	for(int i = 0; i < M; i++)
	{
		cin >> F[i];
		if(F[i] > 0)
		{
			sum = sum + F[i];
			count++;
		}
	}

	if(count > 0)
		cout << "Среднее арефметические: " << sum / count;
	else
		cout << "Нет положительных чисел";
	
	return 0;
}