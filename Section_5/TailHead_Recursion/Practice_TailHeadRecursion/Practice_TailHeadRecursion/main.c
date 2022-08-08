//
//  main.c
//  Practice_TailHeadRecursion
//
//  Created by Zaden Connell on 8/8/22.
//

#include <stdio.h>

void fun(int n ) {
    if(n>0) {
        fun(n-1);
        printf("%d ", n);
    }
}

int main() {
    int x = 3;
    fun(x);
    
    return 0;
}
