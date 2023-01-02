#include <bits/stdc++.h>
using namespace std;

int sumDigits(int i, int a, int b)
{
	int sum = 0;
	while(i/10)
	{
		sum+=(i%10);
		i/=10;
	}
	sum+=(i%10);
	return (sum >= a && sum <= b)?1:0;
}

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	int ans=0;
	for(int i = 1; i <= n; i++)
	{
		ans+=(sumDigits(i,a,b)==1?i:0);
	}
	cout << ans << endl;
	return 0;
}