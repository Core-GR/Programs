#include <bits/stdc++.h>
using namespace std;
int main()
{
	string cadena1;
	string cadena2;
	string cadena3;
	cin>>cadena1>>cadena2>>cadena3;
	string cadenaf;
	if (cadena1.size()<=1000001 && cadena2.size()<=1000001 && cadena3.size()<=1000001)
	{
		cadenaf=cadena1+cadena2+cadena3;
		sort(cadenaf.begin(),cadenaf.end());
		int m=cadenaf.size();
		m=(m/2)+0.5;
		cout<<cadenaf[m]<<endl;
	}
	return 0;
}
