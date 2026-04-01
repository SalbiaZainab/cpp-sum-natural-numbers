#include <iostream>
using namespace std;
int main()
{
	int N;
	int sum = 0;
	cout << " Please enter N: ";
	cin >> N;
	int i = 1;
	while (i <= N)
	{
		sum += i;
		i++;
	}
	cout << "Sum = " << sum;
	return 0;
}
