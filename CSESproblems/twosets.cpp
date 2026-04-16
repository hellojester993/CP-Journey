#include <bits/stdc++.h>
#include <vector>

using namespace std;

void sort(vector<int> &set1, vector<int> &set2,long long n, long long mid){
    long long firstTot = 0;
    long long secTot = 0;
    for (int i = n; i >=1;i--){
        if(firstTot+i <= mid){
            firstTot += i;
            set1.push_back(i);
        }else{
            secTot += i;
            set2.push_back(i);
        }
    }
}

void print(vector<int> arr){
    for(const auto& element : arr){
        cout << element <<" ";
    }
    cout << endl;
}

int main(){
    long long n;
    cin >> n;

    long long sum = (n*(n+1))/2;
    long long mid = sum/2;

    vector<int> set1;
    vector<int> set2;

    if(sum % 2 == 0){
        cout << "YES" <<endl;
        sort(set1,set2,n,mid);
        cout<< set1.size() <<endl;
        print(set1);
        cout << set2.size() <<endl;
        print(set2);


    }else{
        cout<< "NO"<<endl;
    }
}