#include <bits/stdc++.h>
using namespace std;

//Time Complexity O(N * N)
void run_case() {
	int N;
	cin >> N;
	vector<int> A(N);

	for (auto& x: A)
		cin >> x;

	for (int i = 1; i < N; ++i) {
		int current = A[i];
		int j = i - 1;

		while (A[j] > current && j >= 0) {
			A[j+1] = A[j];
			--j;
		}

		A[j+1] = current;
	}

	for (auto& x: A)
		cout << x <<  ' ';

	cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
