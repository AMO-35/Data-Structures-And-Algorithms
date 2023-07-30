#include <bits/stdc++.h>
using namespace std;

//Time Complexity O(N)
void linearSearch(vector<int> B, int x) {
    int pos = -1;

    for (int i = 0; i < (int)B.size(); ++i) {
        if (B[i] == x) {
            pos = i+1;
            cout << "Element found at " << pos << '\n';
            break;
        }
    }

    if (pos == -1) {
        cout << "Element not found" << '\n';
    }
}

void run_case() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    linearSearch(A, M);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
