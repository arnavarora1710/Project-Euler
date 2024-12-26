#include <iostream>
#include <vector>

#define MAXN 1e7
std::vector<bool> is_prime(MAXN, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAXN; i++)
        if (is_prime[i])
            for (long long j = 1LL * i * i; j < MAXN; j += i)
                is_prime[j] = false;
}

int main() {
    int N = 10001;
    sieve();
    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) {
            N--;
            if (N == 0) {
                std::cout << i;
                break;
            }
        }
    }
}
