#include <iostream>

int main() {
    int N = 4000000;
    int p = 1, c = 1;
    int ans = 0;
    while (c <= N) {
        int t = c;
        ans += (c&1 ? 0 : c);
        c += p;
        p = t;
    }
    std::cout << ans;
}
