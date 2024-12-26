#include <iostream>
#include <vector>

#define MAXN 2e6
std::vector<bool> is_prime(MAXN, true);
long long ans;

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAXN; i++)
        if (is_prime[i]) {
            ans += i;
            for (long long j = 1LL * i * i; j < MAXN; j += i)
                is_prime[j] = false;
        }
}

int main() {
    sieve();
    std::cout << ans; // Answer: 142913828922
}
