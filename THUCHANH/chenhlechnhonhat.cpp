#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int minn = 1e9;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i < n - 1; i++){
            int x = a[i+1] - a[i];
            minn = min(x, minn);
        }
        cout << minn <<'\n';
    }
}