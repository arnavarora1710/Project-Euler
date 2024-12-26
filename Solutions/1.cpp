#include <iostream>

int main() {
    int N = 1000;
    int ans = 0;
    for (int i = 1; i < N; ++i) {
        ans += (i % 3 == 0 || i % 5 == 0) ? i : 0;
    }
    std::cout << ans << '\n'; // Answer: 233168
}
