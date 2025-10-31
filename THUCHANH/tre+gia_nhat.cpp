#include<bits/stdc++.h>
using namespace std;

struct sv {
    string name, date;
    int ngay, thang, nam;
};

int stringToInteger(string s) {
    int res = 0;
    for (char c : s) {
        res = res * 10 + (c - '0');
    }
    return res;
}

void nhap(sv& a) {
    cin >> a.name >> a.date;
    a.ngay = stringToInteger(a.date.substr(0, 2));
    a.thang = stringToInteger(a.date.substr(3, 2));
    a.nam = stringToInteger(a.date.substr(6, 4));
}

bool cmp(sv a, sv b) {
    if (a.nam != b.nam) {
        return a.nam < b.nam;
    }
    if (a.thang != b.thang) {
        return a.thang < b.thang;
    }
    return a.ngay < b.ngay;
}

int main() {
    int n;
    cin >> n;
    sv a[n]; 
    for (int i = 0; i < n; i++) {
        nhap(a[i]);
    }
    sort(a, a + n, cmp);
    cout << a[n - 1].name << "\n";
    cout << a[0].name << "\n";

    return 0;
}