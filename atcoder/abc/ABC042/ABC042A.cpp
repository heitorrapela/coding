#include <bits/stdc++.h>
using namespace std;

int cont5(int x)
{
	return x==5?1:0;
}

int cont7(int x)
{
	return x==7?1:0;
}

int main()
{
	int a,b,c, c5=0, c7=0;
	cin >> a >> b >> c;
	c5+=(cont5(a)+cont5(b)+cont5(c));
	c7+=(cont7(a)+cont7(b)+cont7(c));
	cout << ((c5==2 && c7==1)?"YES":"NO") << endl;
	return 0;
}