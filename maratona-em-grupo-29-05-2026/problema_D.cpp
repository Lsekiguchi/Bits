#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long x;
    bool igual = false;
    int contador = 0;
    int y = 0, aux = 0;
    vector <long long> bac(n);
    for(int i=1;i<n;i++){
        cin>>x;
        for(int p=0; p<n;p++){
            if(x==bac[p]){
                bac[p]=bac[p]*2;
                igual = true;
                break;
            }
        }
        if(!igual){
            bac[y]=x;
            y++;
        }
        igual = false;

    }
    vector <long long> bac2(y-1);
    while (aux < y) {
        bac2[aux] = bac[aux];
        aux++;
    }
    sort(bac2.begin(), bac2.end());
    for(int k=0;k<n-1;k++){
        while(bac2[k]*2<=bac2[k+1]){
            bac2[k]=bac2[k]*2;
            contador++;
        }
        if(bac2[k]!=bac2[k+1]){
            contador = -1;
            break;
        }
        else{
            bac2[k+1]=bac2[k+1]*2;
        }
    }
    cout << contador;

}