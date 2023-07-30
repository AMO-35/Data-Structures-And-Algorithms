#include <bits/stdc++.h>
using namespace std;

const int INF = (int) 1e9 + 7;

//Time Complexity O(N * N)
void run_case() {
	int N;
	cin >> N;
	vector<int> A(N);

	for (auto& x: A)
		cin >> x;

	for (int i = 0; i < N-1; ++i) {

		for (int j = i+1; j < N; ++j) {
			if (A[j] < A[i])
				swap(A[j], A[i]);
		}

	}

	for (auto& x: A)
		cout << x << ' ' ;

	cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
