#include<iostream>

using namespace std;
#define N 100
int main()
{
	int i=0, a[10],b[N][3];
	int count = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < count; i++)
	{
		if (a[i] == 1)
		{
			b[i][0] = a[i];
		}
		else if(a[i]==2)
		{
			b[i][1] = a[i];
		}
		else if (a[i] == 3)
		{
			b[i][2] = a[i];
		}
	}
	for (i = 0; i < count; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << b[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;

}
