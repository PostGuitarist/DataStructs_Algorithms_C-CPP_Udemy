//
//  main.cpp
//  Practice_PointerToStructure
//
//  Created by Zaden Connell on 7/22/22.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
}l;

int main() {
    Rectangle *p;
    p = new Rectangle;
    
    p -> length = 15;
    p -> breadth = 7;
    
    cout << p -> length << endl;
    cout << p -> breadth << endl;
    
    return 0;
}
