#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S1;
    getline(cin, S1);
    string S2;
    getline(cin, S2);
    if(S1.size()==S2.size()){
        bool tabla[S1.size()];
        memset(tabla, false, sizeof(tabla));
        for(int i=0; i<S1.size(); i++){
            for(int j=0; j<S2.size(); j++){
                if(S1[i]==S2[j]){
                    tabla[i]=true;
                }
            }
        }
        for(int i=0; i<S1.size(); i++){
            if(tabla[i]==false){
                cout<<"No :("<<endl;
                return 0;
            }
        } cout<<"ANAGRAMA!"<<endl;
        return 0;
    }
    cout<<"No :("<<endl;
    return 0;
}
