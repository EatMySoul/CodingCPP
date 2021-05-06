#include<iostream>

using namespace std;
//ОБРАБОТКА  ОДНОМЕРНЫХ  МАССИВОВ  (ВЕКТОРОВ)
/*3.Переписать элементы массива Х(N) в массив  Y(N)  в  обратном порядке.*/

int main()
{
	int N;
	cin >> N;
	int X[N], Y[N];

	cout << "Input X:" << endl;
	for(int i = 0; i < N; i++)
		cin >> X[i];

	for(int i = 0; i < N; i++)
	{
		Y[N - i - 1] = X[i];
	}

	cout << endl << "Y:" << endl;
	for(int i = 0; i < N; i++)
		cout << Y[i] << endl;

	return 0;
}