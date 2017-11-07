#include <iostream>
#include <stdlib.h>


int main()
{
	using namespace std; 

	int k = 10;
	double sum = 0;
	double val = 0;
	for (int i = 1; i < k; i++)
	{
		val = (double) 1/(i*i);
		sum += val;
		cout << "val " << val << " i: " << i << endl;
	}

	//printf("sum= %22.17e\n",sum);
	cout << "sum " << sum << endl;

	return 0;
}