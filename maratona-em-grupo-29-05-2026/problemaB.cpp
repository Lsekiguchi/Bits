#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long T, a, b, i, k, p, L, R, c, d;

    cin >> T;

    for(i = 0; i<T; i++)
    {
        cin >> L >> R;

        a = 0;
        b = 0;
        d = 1;
        c = 1;
        for(int x = 0; x < R; x++)
            d = d*10;

        for(int y = 0; y < L - 1; y++)
            c = c*10;

        for(k = 1; k*k < d; k++)
            b++;

        for(p = 1; p*p < c; p++)
            a++;
        
        cout << b - a << "\n";
    }
        
        
}