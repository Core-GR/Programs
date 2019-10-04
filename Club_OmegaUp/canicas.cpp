#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int c;
    int a;
    cin>>n;
    cin>>c;
    int tabla[n];
    memset(tabla, 0, sizeof(tabla));
    for(int i=0; i<c; i++){
            cin>>a;
            tabla[a-1]++;
    }
    for(int i=0; i<n; i++){
        cout<<tabla[i]<<endl;
    }

    return 0;
}
