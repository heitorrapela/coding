#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int v[n];
	int flag = 0;
	for(int i = 0; i < n;i++)
	{
		cin >> v[i];
		flag=((v[i]%2!=0)?1:0);
	}
	if(flag==1)
	{
		cout << 0 << endl;
	}
	else
	{
		int ans=0;
		while(flag==0)
		{
			for(int i = 0;i < n;i++)
			{
				if(v[i]%2==0){
					v[i]/=2;
				}
				else{
					flag=1;
					break;
				}
				
			}
			if(flag==0)
				ans+=1;
		}
		cout << ans << endl;
	}

	return 0;
}