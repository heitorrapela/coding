#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans=1; cin >> n;
	int v[n]; for (int i = 0; i < n;i++) cin >> v[i];
	sort(v, v+n);
	//for (int i = 0; i < n;i++) cout << v[i] << endl;
	while(n > 1)
	{
		if(v[n-1] > v[n-2])
			ans++;
		n--;
	}
	cout << ans << endl;

	return 0;
}