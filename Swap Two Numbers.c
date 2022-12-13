#include <stdio.h>
int main() {
    int a;
    long b;  
    long long c; 
    double e;
    long double f;

    printf("Size of int = %d bytes \n", sizeof(a));
    printf("Size of long int = %d bytes\n", sizeof(b));
    printf("Size of long long int = %d bytes\n", sizeof(c));
    printf("Size of double = %lf bytes\n", sizeof(e));
    printf("Size of long double = %lf bytes\n", sizeof(f));
    
    return 0;
}

