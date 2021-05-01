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

	cout << "Input Y: " << endl;
	for(int i = 0; i < N; i++)
		cin >> Y[i];

	for(int i = 0; i < N; i++)
	{
		int tmp = X[N - i - 1];
		X[N - i - 1] = Y[i];
		Y[i] = tmp;
	}

	cout << endl << "Y:" << endl;
	for(int i = 0; i < N; i++)
		cout << Y[i] << endl;
	cout << endl << "X:" << endl;
	for(int i = 0; i < N; i++)
		cout << X[i] << endl;

	return 0;
}