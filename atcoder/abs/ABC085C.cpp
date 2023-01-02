#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, y;
	cin >> n >> y;
	int valid=0, ansa=-1, ansb=-1, ansc=-1;

	for(int i = 0; i <= n+1;i++)
	{
		for(int j = 0; j <= n+1-i; j++)
		{
			int k = (n-i-j);
			if(k<0) break;
			if(i*10000 + j*5000 + k*1000 == y)
			{
				valid=1;
				ansa=i;
				ansb=j;
				ansc=k;
			}
			if(valid==1)
				break;
		}
		if(valid==1)
			break;
	}
	cout << ansa << " " << ansb << " " << ansc << endl;
	return 0;
}