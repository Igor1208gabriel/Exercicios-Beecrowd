#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m, n, k;
    cin >> n >> m >> k;
    vector<int> quer(n);
    vector<int> tem(m);
    for (int i = 0; i < n; i++)
        cin >> quer[i];
    for (int i = 0; i < m; i++)
        cin >> tem[i];
    sort(quer.begin(), quer.begin() + n);
    sort(tem.begin(), tem.begin() + m);
 
    int i = 0, j = 0, count = 0;
    while (true)
    {
        if (quer[i] - k > tem[j]){++j;}
        else{if(quer[i] + k < tem[j]){++i;}
            else{i++;j++;count++;}
        }
        if(i == n || j == m) break;
    }
    cout << count << endl;
}
