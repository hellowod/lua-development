#include "stdio.h"
#include "math.h"

#define l_tg(x)		(x)

int add(int a, int b){
    return a + b;
}

int main(int argc, char const *argv[]) {
    int r = (add)(-10, 100);
    printf("result=%d", r);
    return 0;
}

