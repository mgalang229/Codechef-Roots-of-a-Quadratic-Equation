#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	float a, b, c;
	cin >> a >> b >> c;
	float x1 = ((-1 * b) + sqrt(((b * b) - 4 * a * c))) / (2 * a);
	float x2 = ((-1 * b) - sqrt(((b * b) - 4 * a * c))) / (2 * a);
	cout << fixed << setprecision(6) << x1 << '\n';
	cout << fixed << setprecision(6) << x2 << '\n';
	return 0;
}
