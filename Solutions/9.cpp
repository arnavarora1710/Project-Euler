#include <iostream>
#include <cassert>

// c = 1000 - a - b
// c^2 = a^2 + b^2 = 1e6 + a^2 + b^2 - 2000a - 2000b + 2ab
// 1000a + 1000b - ab = 500000
// (1000 - a) b = 500000 - 1000a
// b = (500000 - 1000a) / (1000 - a)

int main() {
    for (int a = 1; a < 1000; ++a) {
        int num = (500000 - 1000 * a);
        int den = (1000 - a);
        if (num % den == 0) {
            int b = num / den;
            int c = 1000 - a - b;
            assert(a * a + b * b == c * c);
            std::cout << a * b * c; // Answer: 31875000
            break;
        }
    }
}
