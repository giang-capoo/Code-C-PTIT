#include <bits/stdc++.h>
using namespace std;

bool isValidIP(string s)
{
    vector<string> parts;
    string temp = "";

    for (char c : s)
    {
        if (c == '.')
        {
            if (temp.empty())
                return false;
            parts.push_back(temp);
            temp = "";
        }
        else if (!isdigit(c))
        {
            return false;
        }
        else
        {
            temp += c;
        }
    }

    // Thêm phần cuối
    if (temp.empty())
        return false;
    parts.push_back(temp);

    // Phải có đúng 4 phần
    if (parts.size() != 4)
        return false;

    // Kiểm tra từng phần
    for (string p : parts)
    {
        if (p.size() > 1 && p[0] == '0')
            return false; // có số 0 ở đầu

        if (p.size() > 3)
            return false; // quá 3 chữ số

        int val = stoi(p);
        if (val < 0 || val > 255)
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isValidIP(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}