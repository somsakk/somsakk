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
    int m = 5, f1, f2;
    
    f1 = fact_iter(m);
    f2 = fact_recur(m);
    printf("Iterative factorial(%d) = %d\n", m, f1);
    printf("Recursive factorial(%d) = %d\n", m, f2);

    return 0;
}
