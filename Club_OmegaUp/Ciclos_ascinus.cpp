#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int suma=0;
    cin>>n;
    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    for(int i=0; i<n; i++){
            suma=suma+num[i];
        }
    cout<<suma;
    return 0;
}
