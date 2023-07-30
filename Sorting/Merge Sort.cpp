#include <bits/stdc++.h>
using namespace std;

//Time Complexity O(N log N)
void merge(int arr[], int l, int mid, int r) {
    int len1 = mid - l + 1;
    int len2 = r - mid;

    int B[len1];
    int C[len2];

    for (int i = 0; i < len1; ++i)
        B[i] = arr[l + i];

    for (int i = 0; i < len2; ++i)
        C[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < len1 && j < len2) {
        if (B[i] < C[j]) {
            arr[k] = B[i];
            ++k;
            ++i;
        }
        else {
            arr[k] = C[j];
            ++k;
            ++j;
        }
    }

    while (i < len1) {
        arr[k] = B[i];
        ++k;
        ++i;
    }

    while (j < len2) {
        arr[k] = C[j];
        ++k;
        ++j;
    }
}

void mergerSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r)/2;
        mergerSort(arr, l, mid);
        mergerSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void run_case() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    mergerSort(A, 0, N-1);

    for (int i = 0; i < N; ++i)
        cout << A[i] << ' ';

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
