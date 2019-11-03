#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>m>>n;
	if (m>=1 && m<=n && n<=16)
	{
		int c=m*n;
		c=c/2;
		cout<<c<<endl;
	}
	
	return 0;
}

