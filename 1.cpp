#include <iostream>
using namespace std;

void input(int *a, int &n)
{
	cout << "Nhap so dai mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> a[i];
	}
}
void inputX(int &x)
{
	cout << "Nhap phan tu can kiem tra: ";
	cin >> x;
}

bool checkX(int *a, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n, x;
	int a[100];
	input(a, n);
	inputX(x);
	if (checkX(a, n, x) == true)
	{
		cout << "\nTon tai " << x << " trong mang ";
	}
	else
		cout << "\nKhong ton tai " << x << " trong mang.";

	return 0;
}
