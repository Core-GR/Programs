#include <bits/stdc++.h>
using namespace std;
int factorial1(int n1);
int factorial2(int n2);		
int main()
{
	int n1=0;
	int n2=0;
	cin>>n1;
	cin>>n2;
	if (n1>=1 && n2<=n1 && n2<=11)
	{
		int r=0;
		r=factorial1(n1)/factorial2(n2);
		cout<<r<<endl;	
	}
	return 0;
}
int factorial1(int n1){	
    if(n1==0 || n1==1) return 1;
    return n1*factorial1(n1-1);
}
int factorial2(int n2){
    if(n2==0 || n2==1) return 1;
    return n2*factorial2(n2-1);
}
