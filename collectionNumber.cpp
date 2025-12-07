#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    vector<long long> collection(n);
    vector<long long> index(n+1);
    int count = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> collection[i];
    }

    for(ll i = 0; i < n; i++){
        index[collection[i]] = i + 1; 
    }
    for(ll i = 1; i < n; i++){
        if(index[i] > index[i + 1]){
            count++;
        } 
    }
    cout << count << endl;
    return 0;
}