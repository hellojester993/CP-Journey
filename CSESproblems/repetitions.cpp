#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;

    cin >> s;

    int length = 0;
    int maxLen = 0;
    for(int i =0; i<s.length();i++){
        length +=1;
        if(s[i+1] != s[i]){
            if(length > maxLen){
                maxLen = length;
            }
            length = 0;
        }
    }
    cout << maxLen;
}