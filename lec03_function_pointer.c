// Example from the lecture note on function pointer

#include <stdio.h>

// int x10(int), x2(int);
// void print_array(int [], int n);
// void mutate_map(int [], int n, int (*) (int));

int x2 (int n) { return 2*n;  }
int x10(int n) { return 10*n; }
int abs(int n) { 
    if (n > 0) {
        return n;
    } 
    else {
        return -n; 
    }
}
// Try swap the function declaration
// int x10(int n) { return 10*n; }

void mutate_map (int A[], int n, int (*fp) (int)) {
    for (int i = 0; i < n; i++) {
        A[i] = (*fp)(A[i]);
    }
}

void print_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(void)
{
    int A[] = {3, 1, -4}, n = 3;
    // int A[] = {3, 1, 4, -9}, n = 4;
    
    print_array(A,n);
    // we can pass in function via its address
    mutate_map(A, n, &x2);
    print_array(A,n);
    mutate_map(A, n, &x10);
    print_array(A,n);
    mutate_map(A, n, &abs);
    print_array(A,n);

    // Addresses of the functions. So functions are similar to numbers. Address of the func is the addr of the first line of the func.
    // printf("&x2 = %p, &x10 = %p, &print_array = %p, &mutate_map = %p\n", &x2, &x10, &print_array, &mutate_map);
    printf("&x2\t\t\t\t = %p\n&x10\t\t\t = %p\n&mutate_map\t\t = %p\n&print_array\t = %p\n", &x2, &x10, &mutate_map, &print_array);
    printf("&abs\t\t\t = %p\n", &abs);

}
