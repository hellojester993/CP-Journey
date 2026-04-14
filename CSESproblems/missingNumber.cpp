#include <bits/stdc++.h>
#include <cstdio>

using namespace std;


int main(){
    long long n;
    long long sumofInput =0;

    cin >> n;
    long long sum = (n*(n+1))/2;
    // for loop execute n-1 times
    for (long long i = 1; i < n; i++){
        long long x;
        cin >> x;
        sumofInput += x;
        // cout << sumofInput << "sum " << endl;
    }

    cout << (sum - sumofInput);

}