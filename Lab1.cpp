#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double s,s1,n;

cout << "Area of described square. The number must be >0. \ns = "; cin>>s; //Enter area of described square
s1 = s/2; //search area of an inscribed square
n = s/s1;
cout<<"The area of an inscribed square " <<s1 <<"\n" <<"\n";
cout<<"The area of the inscribed square is smaller than area described square in "<<n  <<" times" <<"\n";
return 0;
}
