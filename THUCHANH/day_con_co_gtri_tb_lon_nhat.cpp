#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        float a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        float sum = 0;
        for (int i = 0; i < k; i++)
            sum += a[i];
        float maxSum = sum;
        int start = 0;

        for (int i = k; i < n; i++)
        {
            sum = sum + a[i] - a[i - k];
            if (sum > maxSum)
            {
                maxSum = sum;
                start = i - k + 1;
            }
        }
        for (int i = start; i < start + k; i++)
            cout << fixed << setprecision(0) << a[i] << " ";
        cout << endl;
    }
}