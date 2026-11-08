#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    cin >> a >> b;

    int ans = 0;
    for (long long i = a; i <= b; i++) {
        long long sum = (i > 1) ? 1 : 0;
        for (long long j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                sum += j;
                if (j != i / j) sum += i / j;
            }
        }
        if (sum > i) ans++;
    }
    cout << ans;
    return 0;
}
