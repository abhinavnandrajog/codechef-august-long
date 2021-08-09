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

        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        int freq[11] = {0};
        freq[a1]++;
        freq[a2]++;
        freq[a3]++;
        freq[a4]++;

        int count = 0;

        for (int i = 0; i < 11; i++)
        {
            if (freq[i] >= 1)
            {
                count++;
            }
        }

        if (count == 4 || count == 3)
        {
            cout << "2" << endl;
        }
        else if (count == 2)
        {
            if (freq[a1] == 2 || freq[a2] == 2 || freq[a3] == 2 || freq[a4] == 2)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}