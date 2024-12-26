#include <iostream>

int main() {
    int N = 100;
    long long sum = N * (N + 1) / 2;
    sum *= sum;
    long long sq = N * (N + 1) * (2 * N + 1) / 6;
    std::cout << sum - sq; // Answer: 25164150
}
