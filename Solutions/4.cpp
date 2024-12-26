#include <iostream>
#include <string>

int main() {
    int L = 100, R = 999;
    auto check = [&] (int x) {
        int y = 0;
        for (int i = x; i; i /= 10)
            y = y * 10 + i % 10;
        return x == y;
    };
    int ans = 0;
    for (int i = R; i >= L; --i) {
        for (int j = i; j >= L; --j) {
            if (ans < i * j && check(i * j)) {
                ans = i * j;
            }
        }
    }
    std::cout << ans; // Answer: 906609
}
