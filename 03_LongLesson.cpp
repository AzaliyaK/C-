/*
Lesson 1: summation of two time stamps
*/
#include <iostream>
using namespace std;
struct Time {
    int h;
    int m;
    public:
    Time(int hh,int mm): h(hh),m(mm)
    {}

    Time() {
    std::cout << "Enter h:m "; // no flush needed
    std::cin >> h >> m;
    };

    Time Sum ( Time t ){
            Time tmp={0,0};
            tmp.m=(m+t.m);
            tmp.h=(h+t.h+tmp.m/60)%24;
            tmp.m%=60;
            return tmp;
    }
};

Time t1,t2; // static object

int main()
{
    std::cout.precision(2);
    std::cout << "begin  is : " << t1.h <<":" <<t1.m<< '\n';
    std::cout << "long   is : " << t2.h <<":" <<t2.m<< '\n';
    Time t3(0,0);
    t3=t1.Sum(t2);
    std::cout << "finish is : "<< t3.h <<':' << t3.m << '\n';
}
