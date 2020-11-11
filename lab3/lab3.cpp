#include <iostream>

using namespace std;

int main()
{
    double q,sum1=0,Number, sum=1, factorial=1;
    int i=0;
cout << "Enter a number with \".\" NO \",\"" <<"\n" <<"q= ";
cin >>q; //Enter the accuracy of calculations
 while (abs(sum-sum1)>q){
    i++;
    factorial=factorial*i; //Searching i!
    Number=1/factorial; //Searching Number
    sum1=sum;
    sum=sum+Number; //Searching sum of Numbers
 }
cout <<"\n" <<sum; //output
}
