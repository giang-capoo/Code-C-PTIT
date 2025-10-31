#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string k, m;
    int dem = 0;
    while(ss >> m){
        k = m;
        if(k.length() >= 3){
            if(k[0] == 'a' || k[0] == 'e' || k[0] == 'i' || k[0] == 'o' || k[0] == 'u'){
                dem++;
            }
        }
    }
    cout << dem;
}