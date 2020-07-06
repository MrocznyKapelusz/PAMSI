#include "pch.h"
#include "MergeSort.h"

using namespace std;




int main()
{
	int k;
	cout << "Ile tablic?\n";
	cin >> k;
	cout << "Jaki rozmiar?\n";
	//cin >> N;
	const int N = 5;
	int D[N];
	int P[N];
	

	for (int i = 0; i<k; i++)
	{

		for (int j = 0; j < N; j++)
		{
			
			cin >> D[j];
			P[i] = 0;
			//cout << "\n"<<D[j];
		}
		/*
		for (int j = 0; j < N; j++)
		{
			cout << D[j] << " ";
		}
		*/
		MergeSort(0, N - 1,D,P);
		for (int j = 0; j < N; ++j)
		{
			D[j] = P[j];
		}

		for (int j = 0; j < N; j++)
		{
			cout << D[j]<<" ";
		}
		cout << "\n";
		for (int j = 0; j < N; j++)
		{
			cout << P[j] << " ";
		}
	}

	return 0;
}