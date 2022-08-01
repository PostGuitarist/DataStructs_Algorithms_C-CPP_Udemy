//
//  main.cpp
//  Practice_CPPClasses
//
//  Created by Zaden Connell on 8/1/22.
//

#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
    
public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
    
    //Mutator
    void setLength(int l) {
        length = l;
    }
    void setBreadth(int b) {
        breadth = b;
    }
    
    //Accessor
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    
    //Destructor
    ~Rectangle() {
        cout << "Destructor" << endl;
    }
};

int main() {
    Rectangle r(10, 5);
    
    cout << "Area " << r.area() << endl;
    cout << "Perimeter " << r.perimeter() << endl;
    
    return 0;
}
