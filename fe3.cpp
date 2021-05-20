#include<stdio.h>
int foobar(int* n){
     *n = *n +1;
     return *n;
    int k = 6;
    printf("foobar(k) = %d,",foobar(&k) );
    printf(" k = %d\n", k);
}


