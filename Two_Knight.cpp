#include<bits/stdc++.h>
using namespace std;

// total no. of way nnight can palce in n*n chess board.
// (n^2 * (n^2 - 1)) / 2

//nnight attacn each other position in 2*3 box.
// no of 3*2 box on n*n  = (row = n-1), (column = n-2) so total = (n - 1) * (n - 2)
// and each have to possiblity to place nnight which attacn = 2 * (n - 1) * (n - 2)

//Similarly for 3*2 box
// no of 2*3 box on n*n  = (row = n-2), (column = n-1) so total = (n - 2) * (n - 1)
// and each have to possiblity to place nnight which attacn = 2 * (n - 2) * (n - 1)

// so total possible attacns = 4 * (n-1) * (n-2)

typedef long long ll;

int main(){
    ll k;
    cin >> k;
    for(ll n = 1; n <= k; n++){
        ll totalPossibality = (n * n) * (n * n- 1) / 2;
        ll totalattacn = 4 * (n - 1) * (n - 2);
        cout<< totalPossibality - totalattacn << endl;
    }

}
