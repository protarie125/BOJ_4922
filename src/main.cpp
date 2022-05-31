#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < n) {
		cout << n << " => " << n * n - n + 1 << '\n';

		cin >> n;
	}

	return 0;
}