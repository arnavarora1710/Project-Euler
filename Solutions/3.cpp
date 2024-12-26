#include <iostream>

int main() {
    long long N = 600851475143;
    long long ans;

    // remove all 2s
    while (!(N&1)) ans = 2, N >>= 1;
    // remove all 3s
    while (N % 3 == 0) ans = 3, N /= 3;

    // if p is prime, then p = 6n +/- 1
    for (long long i = 5; i*i <= N; i += 6) {
        while (N % i == 0) ans = i, N /= i;
        while (N % (i+2) == 0) ans = i+2, N /= i+2;
    }
    if (N > 4) ans = N;
    std::cout << ans; // Answer: 6857
}
