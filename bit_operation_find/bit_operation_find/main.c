//
//  main.c
//  bit_operation_find
//
//  Created by 박승우 on 10/10/20.
//

#include <stdio.h>

int find_bit(int d){
    int bitcnt = 0;
    for(int i = 0; i < sizeof(d)*8; i++){
        if(d & (1 << i)){
            bitcnt++;
        };
    };
    return bitcnt;
};

int main() {
    printf("%d\n", find_bit(257));
}
