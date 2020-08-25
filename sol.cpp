#include <bits/stdc++.h>

using namespace std;

const long int MAX = (int) 2 * 1e5;
long int a[MAX], n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		while (a[i + 1] < a[i]) {
			a[i + 1]++;
			cnt++;
		}
	}
	cout << cnt << '\n';
}
