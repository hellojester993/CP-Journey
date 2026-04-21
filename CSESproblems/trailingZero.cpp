#include <bits/stdc++.h>

using namespace std;

bool isPower5(long long num, long long &worth){
    if (num <= 1){
        // cout << "false";
        return false;
    }

    if(num % 5 != 0){
        // cout << "false";
        return false;
    }
    while (num % 5 == 0){
        worth +=1;
        num /= 5;
        if(num % 5 == 1){
            break;
        }

    }
    // cout << worth;

    return true;

}


int main(){
    long long n;
    long long worth = 0;

    cin >> n;

    for(long long i = 0; i <= n; i +=5){
        isPower5(i,worth);
    }


    cout << worth << "\n";

}