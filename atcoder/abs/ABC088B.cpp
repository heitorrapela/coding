#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans=0;
	cin >> n;
	int v[n];
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v,v+n);
	int flip=0;

	while(n>0)
	{
		n--;
		if(flip==0)
		{
			ans+=v[n];
		}
		else
		{
			ans-=v[n];
		}
		flip = 1-flip;
	}
	cout << ans << endl;
	return 0;
}