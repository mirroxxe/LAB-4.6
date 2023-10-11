#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i, j;
	double S, P;
	S = 0;
    i = 1;
	while (i <= 20)
	{
		P = 1;
		j = 1;
			while (j <= i) {
				P *= j;
				j++;
			}
		S += (i + P) / (pow(i, 2) + pow(P, 2));
		i++;
	}
	cout << "sum: " << S << endl;
	S = 0;
	i = 1;
	do
	{
		P = 1;
		j = 1;
		do
		{
			P *= j;
			j++;
		} while (j <= i);
		S += (i + P) / (pow(i, 2) + pow(P, 2));
		i++;
	} while (i <= 20);
	cout << "sum: " << S << endl;
	
	S = 0;
	for (i = 1; i <= 20; i++)

	{
		P = 1;
		for (j = 1; j <= i; j++)

		{
			P *= j;
		}
		S += (i + P) / (pow(i, 2) + pow(P, 2));

	}
	cout << "sum: " << S << endl;
	S = 0;
	for (i = 20; i >= 1; i--)

	{
		P = 1;
		for (j = i; j >= 1; j--)

		{
			P *= j;
	
		}
		S += (i + P) / (pow(i, 2) + pow(P, 2));
	}
	cout << "sum: " << S << endl;
	return 0;
}