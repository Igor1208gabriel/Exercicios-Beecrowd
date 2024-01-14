#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> dias;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        dias.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        cerr << i + 1 << " " << dias[i];
        if (i + 1 < 10 && dias[i] >= 1 + i)
        {
            ans++;
            cerr << "¹";
        }
        if (i + 1 < 10 && dias[i] >= (1 + i) * 11)
        {
            ans++;
            cerr << "²";
        }
        if (i + 1 >= 10)
        {
            if ((1 + i) % 11 == 0 && dias[i] >= i + 1)
            {
                ans++;
                cerr << "³";
            }
            if ((1 + i) % 11 == 0 && dias[i] >= (dias[i]) / 11)
            {
                ans++;
                cerr << "£";
            }
        }
        cerr << endl;
    }
    cout << ans;
}