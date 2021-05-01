#include<iostream>

using namespace std;
//ОБРАБОТКА  ОДНОМЕРНЫХ  МАССИВОВ  (ВЕКТОРОВ)
/*6.Найти минимальный и максимальный элементы массива D(N)  и поменять их местами.*/

int main()
{
	int N,max,min,pos_max = 0,pos_min = 0;
	cin >> N;
	int D[N];

	for(int i = 0; i < N; i++)
		cin >> D[i];

	max = D[0];
	min = D[0]; 

	for(int i = 1; i < N; i++)
	{
		if(D[i] > max)
		{
		    max = D[i];
		    pos_max = i;
		}
		if(D[i] < min)
		{
			min = D[i];
			pos_min = i;
		}
	}

	D[pos_max] = min;
	D[pos_min] = max;

	for(int i = 0; i < N; i++)
		cout << D[i] << endl;

	return 0;
}