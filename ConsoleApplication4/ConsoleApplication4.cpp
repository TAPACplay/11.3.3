
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int n;
	int a;
	cout << "Кількість ділень \n";
	cin >> n;
	a = pow(2,n);
	cout << a << endl;
	system("pause");
	return 0;
}