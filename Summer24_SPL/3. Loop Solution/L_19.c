#include <stdio.h>

int main() {
    double x, term, sum;
    int i, n, sign;

    scanf("%lf", &x);

    n = 10; 
    sum = 0.0;    
    term = x;     
    sign = 1;

    for (i = 1; i <= n; i++) {
        sum += sign * term;    
        term *= x * x / ((2 * i) * (2 * i + 1)); 
        sign *= -1;
    }

    printf("%.3f\n", sum);

}
