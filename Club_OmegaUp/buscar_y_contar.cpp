#include <iostream>

using namespace std;

int main(){
int n=0;
cin>>n;
int num[n];
for(int i=0; i<n; i++){
    cin>>num[i];
}
int vig=0;
cin>>vig;
int contador=0;
for(int i=0; i<n; i++){
    if(num[i]==vig){
        contador++;
    }
}
cout<<contador;
return 0;
}
