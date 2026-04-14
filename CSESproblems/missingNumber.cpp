#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int sum;
    int actSum;
    int sumofInput;
    cin >> n;
    
    // for loop execute n-1 times
    for (int i = 0; i < n -1; i++){
        int x;
        cin >> x;
        sumofInput += x;
        sum +=i; // sums (0 - n-1)
    }

    actSum = n + sum;

    cout << (actSum - sumofInput);

}