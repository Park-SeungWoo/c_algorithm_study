//
//  main.c
//  factorial_recursive
//
//  Created by 박승우 on 10/10/20.
//

#include <stdio.h>

int factorial_R(int n);

int main() {
    printf("%d\n", factorial_R(5));
    return 0;
}

int factorial_R(int n) {
    if(n != 1){
        return n * factorial_R(n-1);
    }else {
        return 1;
    }
}
