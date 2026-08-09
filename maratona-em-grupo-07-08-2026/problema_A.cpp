
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, c, mes, a, cont = 0, elemax = 0;

    cin >> n >> c;

    vector<long long> v(n);

    for(long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(long long i = 0; i < c; i++)
    {
        cin >> mes >> a;
        
        for(long long k = mes-1; k >= 0; k--)
            v[k] = v[k] + a;
    }
    long long contador=0;
    deque<long long> fila;
    fila.push_back(v[0]);
    for(long long j=1;j<n;j++){
        contador=fila.size();
        cout << contador << "\n";
        for(long long m=1;m<=contador;m++){
            if(v[j]>=fila.back()){
                fila.pop_back();
            }
            else break;
        }
        fila.push_back(v[j]);
    }
   

    return 0;
}
