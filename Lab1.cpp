#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double s,s1,n;

cout << "Area of described square. The number must be >0. \ns = "; cin>>s; // ������� ����� ��������� ��������
s1 = s/2; //��������� ����� ��������� ��������
n = s/s1;
cout<<"The area of an inscribed square " <<s1 <<"\n" <<"\n";
cout<<"The area of the inscribed square is smaller than area described square in "<<n  <<" times" <<"\n";
return 0;
}
