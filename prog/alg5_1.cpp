#include <ctime>
#include <iostream>
using namespace std;
const int n = 10;
int main()
{
		clock_t now = clock();
		int a[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 999 - 1;
			cout << a[i] << " ";
		}
		cout << endl;
		int d;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i] > a[j])
				{
					d = a[i];
					a[i] = a[j];
					a[j] = d;

				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		clock_t end = clock();
		double sec = (double)(end - now) / CLOCKS_PER_SEC;
		cout << endl << sec << " sec" << endl;
}

