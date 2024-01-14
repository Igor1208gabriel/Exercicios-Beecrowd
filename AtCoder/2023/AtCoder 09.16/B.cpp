#include <bits/stdc++.h>
using namespace std;

int pal(string str)
{
	int n = str.size();

	int tamMAX = 1, comeco = 0;

	for (int i = 0; i < str.length(); i++) {
		for (int j = i; j < str.length(); j++) {
			int temp = 1;

			for (int k = 0; k < (j - i + 1) / 2; k++)
				if (str[i + k] != str[j - k])
					temp = 0;

			if (temp && (j - i + 1) > tamMAX) {
				comeco = i;
				tamMAX = j - i + 1;
			}
		}
	}

	return tamMAX;
}

int main()
{
	string str; cin >> str;
	cout << pal(str);
	return 0;
}
