#include "random.h"
#include "../params.h"
#include <iostream>

using namespace std;
using ll = long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    long long n = gen.uniform(N_MIN, N_MAX);
    printf("%lld\n", n);
    for (int i = 0; i < n; i++) {
        long long a = gen.uniform(A_MIN, N_MAX);
        printf("%lld", a);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
