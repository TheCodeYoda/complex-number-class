#include <iostream>
using namespace std;
#include<cmath>
#include "complex.h"

int main() {
    complex c1(1.7,2.8);
    complex c2(2.3,4.5);
    complex c3(2.95,-1.32);

    cout<<c1<<"\t\t"<<c2<<"\t\t"<<c3<<endl;
    cout<<c1+c3<<"\t\t"<<c1+c2<<endl;
    cout<<"magnitudes: "<<c1.mag()<<"\t\t"<<c2.mag()<<"\t\t"<<c3.mag()<<endl;
    cout<<"c1<c2 "<<(c1<c2)<<endl;
    cout<<"c2<c3 "<<(c2<c3)<<endl;
    cout<<"c1==c2 "<<(c1==c2)<<endl;
    cout<<"c2!=c3 "<<(c2!=c3)<<endl;
}
