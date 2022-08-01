//
//  main.cpp
//  Practice_TemplateClass
//
//  Created by Zaden Connell on 8/1/22.
//

#include <iostream>

using namespace std;

template<class T>
class Arithametic {
private:
    T a;
    T b;
public:
    Arithametic(T a, T b);
    T add();
    T sub();
};

    template<class T>
    Arithametic<T>::Arithametic(T a, T b) {
        this -> a = a;
        this -> b = b;
    }
       
    template<class T>
    T Arithametic<T>::add() {
        T c;
        c = a + b;
        return c;
    }
      
    template<class T>
    T Arithametic<T>::sub() {
        T c;
        c = a - b;
        return c;
    }


int main() {
    Arithametic<char> ar('B', 'A');
    cout << "Add: " << (int)ar.add() << endl;
    cout << "Sub: " << (int)ar.sub() << endl;
    
    return 0;
}
