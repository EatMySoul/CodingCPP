#include<iostream>

using namespace std;
//ОБРАБОТКА  ОДНОМЕРНЫХ  МАССИВОВ  (ВЕКТОРОВ)
/*16.Переписать подряд в массив Y положительные и в массив  Z отрицательные элементы массива X(N).*/

int main()
{
	int N,positive_cout = 0,negative_count = 0;
	cin >> N;
	int X[N];

	for(int i = 0; i < N; i++)
	{
		cin >> X[i];
		if(X[i] >= 0)
			positive_cout++;
		else
			negative_count++;
	}

	int Y[positive_cout],Z[negative_count];

	int y_item = 0,z_item = 0;

	for(int i = 0; i < N; i++)
	{
		if(X[i] >= 0)
		{
			Y[y_item] = X[i];
			y_item++;
		}
		else
		{
			Z[z_item] = X[i];
			z_item++;
		}
	}

	cout  << endl << "Y : " << endl;

	for(int i = 0; i < positive_cout; i++)
		cout << Y[i] << endl;

	cout << endl << "Z : " << endl;

	for(int i = 0; i < negative_count; i++)
		cout << Z[i] << endl;

	return 0;
}