#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double s,s1,n;

cout << "Area of described square s = "; cin>>s; // Enter area of described square
while (s<=0) {cout <<"\nEnter the correct area s." <<"\n" <<"s = "; cin>>s;} //Check data
s1 = s/2; //search for the area of the inscribed square
n = s/s1;
cout<<"The area of an inscribed square " <<s1 <<"\n" <<"\n";
cout<<"The area of the inscribed square is smaller than area described square in "<<n  <<" times" <<"\n";
return 0;
}
