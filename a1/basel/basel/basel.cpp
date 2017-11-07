#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>



int main()
{
	using namespace std;

	int k = 100000;
	// to store the results of sums for k=10,...,k=10^5
	double sum[] = {0,0,0,0,0};			
	double pi = 3.14159265358979323846; 
	int index = 0;
	double pad = 0; // needed for transitioning to the next index

	for (int i = 1; i <= k; i++)
	{		
		pad = (index > 0 && sum[index] == 0) ? sum[index - 1] : 0;
		sum[index] += (double)1 / pow(i, 2) + pad;
		index = floor((log10(i)));
	}

	double direct = pow(pi, 2) / 6;
	
	cout << setprecision(20) << "direct calculation  " << direct << endl;
	cout << "sum for K = 10^1 " << sum[0] << endl;
	cout << "sum for K = 10^2 " << sum[1] << endl;
	cout << "sum for K = 10^3 " << sum[2] << endl;
	cout << "sum for K = 10^4 " << sum[3] << endl;
	cout << "sum for K = 10^5 " << sum[4] << endl;
		
	cin.get();
	return 0;
}




