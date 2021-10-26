#include <iostream>

using namespace std;


int main()
{
	float Matrix[10][10];
	int N = 10;

	for (int j = 0; j < N - 1; j++)
	{
		for (int i = j + 1; i < N; i++)
		{
			int temp = Matrix[i][j] / Matrix[j][j];

			for (int k = 0; k < N + 1; k++)
				Matrix[i][k] -= Matrix[j][k] * temp;
		}
	}



	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			float temp = Matrix[j][i] / Matrix[i][i];

			Matrix[j][j] -= Matrix[i][j] * temp;
			}

		}
	}
}