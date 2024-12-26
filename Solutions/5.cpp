#include <iostream>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int N = 20;
    int ans = 1;
    for (int i = 1; i <= 20; ++i) ans = lcm(ans, i);
    std::cout << ans; // Answer: 232792560
}
