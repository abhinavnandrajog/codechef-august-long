#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;

        int sum1 = g1 + b1 + s1;
        int sum2 = g2 + b2 + s2;

        if (sum1 > sum2)
            cout << "1" << endl;
        if (sum2 > sum1)
            cout << "2" << endl;
    }

    return 0;
}