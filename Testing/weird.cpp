#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a;
    cin >> a;
    while (a!=1){
        cout << a <<" ";
        if(a%2==0){
            a /= 2;
        }
        else{
            a *= 3;
            a += 1;
        }
    }
    cout << a << " ";
}