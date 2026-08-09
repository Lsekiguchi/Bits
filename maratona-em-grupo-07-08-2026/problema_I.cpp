#include <bits/stdc++.h>
using namespace std;

long long MDC(long long a,long long b){
    long long minimo=min(a,b);
    while(minimo>1){
        if(a%minimo==0 && b%minimo==0){
            return minimo;
        }
        else{
            minimo--;
        }
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long aux1,aux2,aux3;
    long long n,q,x;
    cin >> n >> q >> x;
    vector<long long> eco(n);
    for(long long i=0;i<n;i++){
        cin >> eco[i];
    }
    long long mdc,mdc_ant;
    long long contador;
    for(int i=0;i<q;i++){
        contador=0;
        cin >> aux1 >> aux2 >> aux3;
        if(aux1==1){
            eco[aux2-1]=aux3;
        }
        else if(aux1==2){
            for(long long w=aux2-1;w<aux3;w++){
                if(eco[w]==x) contador++;
            }
            for(long long k=aux2-1;k<aux3;k++){
                mdc_ant=eco[k];
                for(long long j=k+1;j<aux3;j++){
                    mdc=MDC(mdc_ant,eco[j]);
                    if(mdc==x){
                        contador++;
                    }
                    else if(mdc<x) break;
                    mdc_ant=mdc;
                }
            }
            cout << contador << "\n";
        }
    }
    return 0;
}