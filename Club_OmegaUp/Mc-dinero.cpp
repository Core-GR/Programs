#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=0;
	cin>>n;
	if (n>=1 && n<=40)
	{
		for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<"$";
		}
		cout<<endl;
	}
	for(int i=n-1; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<"$";
		}
		cout<<endl;
	}
	}
	
	return 0;
}

