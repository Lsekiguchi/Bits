#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int hf, mf, ha, ma, h, m;
    char buffer;

    cin >> hf >> buffer >> mf;
    cin >> ha >> buffer >> ma;

    h =(60*hf + mf - 60*ha - ma)/60;
    m =(60*hf + mf - 60*ha - ma)%60;


    if(h < 10)
        cout << 0 <<h;
    else
        cout << h;

    cout << ":";

    if(m < 10)
        cout << 0 <<m;
    else
        cout << m;

    


    return 0;
}