#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string palabra;
	int cont=0;
	if (n<=100)
	{
		cin.get();
		getline(cin,palabra);
		if (n>10)
		{
			for (int i = 0; i < n; i++)
			{
				if (i==0)
				{
					cout<<palabra[i];
				}
				else if (i==n-1)
				{
					cout<<cont;
					cout<<palabra[i]<<endl;
				}
				else
				{
					cont+=1;
				}
				
				
			}
			
		} else
		{
			cout<<palabra<<endl;
		}
		
		
	}
	
	return 0;
}

