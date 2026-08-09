#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int aux =0;
    cin >> n >> m;
    int frutas[n][m];
    long long alunos = 0;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cin >> frutas[i][j];
        }
    }
    for(int k=0;k<m;k++){
        for(int l=0;l<n;l++){
            if(frutas[l][k]>aux){
                aux = frutas[l][k];
            }
        }
        alunos+=aux;
        aux = 0;
    }
    cout << alunos;
}