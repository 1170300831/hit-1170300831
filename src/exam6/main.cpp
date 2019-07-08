#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;
float x = 1234456789;
typedef unsigned char *byte_pointer;
//float y;


int main()
{
	int m, n;
	float x, y;
	byte_pointer pByte = NULL;

	n = 1024 * 1024 * 32-1;
	//n=1024*1024*16;
	//n=1024*1024*16+1;
	x = n;
	m = x;

	cout << "x=" << x << "   n=" << n << endl;
	cout << "   n==x is " << (n == x ? "True" : "False") << endl;
	cout << "   n==m is " << (n == m ? "True" : "False") << endl;


	cout << endl << "byte content of x" << endl;
	cout << "---0---" << endl << "0x";
	for (int i = sizeof(x) - 1; i >= 0; i--)
	{
		//cout<<hex<<     ((unsigned char)(*( (unsigned char*)((char*)&x)+i)));	//error output： 以字符形式输出，只能输出第一个K
		cout << hex << setw(2) << setfill('0') << (short)((unsigned char)(*((unsigned char*)((char*)&x) + i)));//right output
	}
	cout << endl;

	cout << endl << "---1---" << endl << "0x" << hex;
	unsigned c;
	for (int i = sizeof(x) - 1; i >= 0; i--)
	{
		c = (unsigned char)(*((unsigned char*)((char*)&x) + i));
		cout << setw(2) << setfill('0') << c;
	}
	cout << endl;

	cout << endl << "---2---" << endl << "0x";
	for (int i = sizeof(x) - 1; i >= 0; i--)
	{
		printf("%.2x", *((unsigned char*)((char*)&x) + i));
	}
	cout << endl;

	cout << endl << "---3---" << endl << "0x";
	pByte = (unsigned char *)&x;
	for (int i = sizeof(x) - 1; i >= 0; i--)
	{
		printf("%.2x", *(pByte + i));
	}
	cout << endl << "-------" << endl;


	n = 0x7FFFFFFF;
	cout << endl << "n=" << n << endl;
	cout << "n*2=" << n * 2 << endl;
	n = 0x80000000;
	cout << "n=" << n << endl;
	cout << "n*2=" << n * 2 << endl;

	n = 40000;

	cout << "usigned int(-1)=" << (unsigned int)(-1) << endl;
	cout << "1e3=" << 1e3 << ".    " << endl;
	cout << "int type  40000 * 40000 = " << n * n << endl;//  ? 1600000000
	n = 50000;
	cout << "int type  50000 * 50000 = " << n * n << endl;//  ? 1600000000

	x = 1e20, y = -1e20;
	cout << "float (1e20 + -1e20) + 3.14 = " << (x + y) + 3.14 << endl;
	cout << "float 1e20 + (-1e20 + 3.14) = " << x + (y + 3.14) << endl;
	return 0;
}
