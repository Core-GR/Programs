#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int r[n-1];
    int suma=0;
    int nres=0;
    for(int i=0; i<(n-1); i++){
        cin>>r[i];
        suma=suma+r[i];
    }
    nres=n*(n+1)/2;
    nres=nres-suma;
    cout<<nres<<endl;

    return 0;
}
