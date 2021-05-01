#include<iostream>


using namespace std;

//Определить  все делители целого числа M, включая 1.

int main()
{
	int M;
	cin >> M;
	for(int i = 1; i <= M; i++)
	{
		if(M % i == 0)
			cout << i << endl;
	}
	return 0;
}