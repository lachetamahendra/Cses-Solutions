#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());

    int missingCoin = 1;
    for(int i = 0; i < n; i++){
        if(coins[i] > missingCoin){
            cout<< missingCoin << endl;
            return 0;
        }
        missingCoin += coins[i];
    }
    cout<< missingCoin << endl;
    return 0;
}