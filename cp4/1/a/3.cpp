#include <bits/stdc++.h>
using namespace std;

int main()
{	
	int t;
	unsigned long long n;
	cin >> t;

	while(t--)
	{
		cin >> n;
		unsigned long long x = (-1 + sqrt(1+4*n*2)) / 2;
		cout << x << endl;
	}

	return 0;
}