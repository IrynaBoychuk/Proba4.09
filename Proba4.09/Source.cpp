#include<iostream>

using namespace std;

void method2()
{
	int x, y;
	int d = 7, a = 13, c = 10, M = 103;
	cout <<endl<< "Vvedit x" << endl;
	cin >> x;
	for (int i = 0; i<100; i++)
	{
		y = (d*x ^ 2 + a*x + c) % M;
		cout << y << " ";
		x = y;
	}
}

void method1(int x) {
	
	int a = 7, b = 13, M = 103;
	return	(a*x + b) % M;
	
}

void method3()
{
	int x, y, z;
	int m;
	cout << endl << "Vvedit x" << endl;
	cin >> x;
	for (int i = 0; i<100; i++)
	{
		y = 0;
		cout << y << " ";
		x = y;
	}
}

int main()
{
	int x, y;
	int a = 7, b = 13,M=103;
	cout <<endl<< "Vvedit x" << endl;
	cin >> x;
	for(int i=0;i<100;i++)
	{
		y = (a*x + b) % M;
		cout << y << " ";
		x = y;
	}

	method2();
	system("pause");
	return 0;

}

