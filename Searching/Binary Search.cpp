#include <bits/stdc++.h>
using namespace std;

//Time Complexity O(log N)
int binary_search(vector<int> arr, int N, int target) {
    int low = 0, high = N-1;
    
    while (low <= high) {
        int middle = (low + high)/2;
        
        if (arr[middle] == target)
            return middle;

        if (arr[middle] < target)
            low = middle + 1;
        else
            high = middle - 1;
    }

    return -1;
}

void run_case() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int ans = binary_search(A, N, M);

    if (ans == -1)
        cout << "Not found" << '\n';
    else
        cout << ans + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
