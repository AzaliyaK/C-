#include <iostream>
using namespace std;

int main(){
    int32_t x=3;
    int32_t y=5;
    cout << "x=" << x""<<" y="<< y << "\n";
    auto tmp=y;
    y=x;
    x=tmp;
    cout << "x=" << x""<<" y="<< y << "\n";
    return 0;
}
/*
//var2
x=x+y;
y=x-y;
x=x-y;
// var3
x=x^y;
y=x^y;
x=X^y;
*/
