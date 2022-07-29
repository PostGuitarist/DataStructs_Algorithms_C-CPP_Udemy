//
//  main.cpp
//  Practice_MonolithicProgram
//
//  Created by Zaden Connell on 7/29/22.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int length = 0, breadth = 0;
    
    printf("Enter length and breadth: ");
    cin >> length >> breadth;
    
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    
    printf("Area = %d\nPerimeter = %d\n", area, peri);
    
    return 0;
}
