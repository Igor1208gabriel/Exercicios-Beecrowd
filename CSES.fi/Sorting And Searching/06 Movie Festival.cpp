#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, este = 0, total = 0;
	vector<pair<int, int>> vetor;
	cin >> n;
	while (n--){
		cin >> x >> y;
		vetor.push_back(make_pair(y, x));
	}
	sort(vetor.begin(), vetor.end());
	for (auto x : vetor)
		if (x.second >= este){
			este = x.first;
			total++;
		}
	
	cout << total;
	return 0;
}