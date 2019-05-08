// 2019/05/09

#include <iostream>
#include <algorithm>

// 2 <= n <= 200000
static const int MAX = 200000;

int main() {
    // R:price
    int R[MAX], n;

    std::cin >> n;
    for ( int i = 0; i < n; i++ ) std::cin >> R[i];

    int maxv = -2*1e09;
    int minv = R[0];

    for ( int i = 1; i < n; i++ ) {
        // Update max value
        maxv = std::max(maxv, R[i] - minv);

        // Retain min value
        minv = std::min(minv, R[i]);
    }

    std::cout << maxv << std::endl;

    return 0;
}