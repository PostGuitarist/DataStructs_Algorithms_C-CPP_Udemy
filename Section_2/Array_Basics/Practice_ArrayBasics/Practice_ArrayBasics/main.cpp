//
//  main.cpp
//  Practice_ArrayBasics
//
//  Created by Zaden Connell on 7/27/22.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    
    int n;
    cout << "Enter Size";
    cin >> n;
    int A[n];
    A[0]=2;
    
    for(int x:A) {
        cout << x << endl;
    }
    
    return 0;
}
