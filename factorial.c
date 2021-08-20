#include <stdio.h>

int fact_recur(int n)
{
    if (n < 2) {
        return 1;
    } 
    else {
        return n*fact_recur(n-1); 
    }
}

int fact_iter(int n)
{
    int i, a=1;
    
    for (i=n; i>1; i--) {
        a = a*i;
    }
    return a;
}

int main()
{
    int n = 5, f1, f2;
    
    f1 = fact_iter(n);
    f2 = fact_recur(n);
    printf("factorial(%d) = %d\n", n, f1);
    printf("factorial(%d) = %d\n", n, f2);

    return 0;
}
