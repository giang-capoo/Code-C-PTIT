#include<bits/stdc++.h>

using namespace std;

int check(string a){
    for(int i = 0; i < a.length(); i++){
        if(a[i] != '0' && a[i] != '6' && a[i] != '8'){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        if(check(a)) cout <<"YES\n";
        else cout << "NO\n";

    }
}