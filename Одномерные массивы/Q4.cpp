#include<iostream>

using namespace std;
//ОБРАБОТКА  ОДНОМЕРНЫХ  МАССИВОВ  (ВЕКТОРОВ)
/*4.Определить максимальный элемент массива В(М) и его порядковый номер.*/

int main()
{
	int M,max,pos_max;
	cin >> M;
	int B[M];

	for(int i = 0; i < M; i++)
		cin >> B[i];

	max = B[0];

	for(int i = 1; i < M; i++)
	{
		if(B[i] > max)
		{
		    max = B[i];
		    pos_max = i;
		}
	}

	cout << "Max: " << max << endl << "Its Pos: " << pos_max + 1;

	return 0;
}