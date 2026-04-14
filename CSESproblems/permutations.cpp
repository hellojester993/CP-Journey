#include <bits/stdc++.h>
#include <vector>

using namespace std;


int main(){
    int n; 
    cin >> n;
    vector<int> arr(n);
    int even = 2;
    int end = 0;
    int odd = 1;
    if (n == 1){ cout << "1";}
    else if (n == 2 || n == 3){
        cout << "NO SOLUTION";
    }else{
        for(int i = 0; i < n;i++){
            if(even <= n){
                arr[i] = even;
                even += 2;
            }
            if (even > n){
                end = i + 1;
                break;
            }
        }
        for(int i = end; i < n;i++){
            if(odd <= n){
                arr[i] = odd;
                odd += 2;
            }
        }

        for(int i = 0; i < arr.size();i++){
            cout << arr[i] << " ";
        }

    }


}