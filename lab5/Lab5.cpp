#include <iostream>

using namespace std;

int main()
{  int lowerLimit;
   cout <<"Enter lower limit >=0 ";
   cin >> lowerLimit;
while (lowerLimit < 0)
    {
        cout <<"Enter lower limit >=0 ";
        cin >> lowerLimit;
    }
   int upperLimit;
   cout <<"Enter upper limit >= lowerLimit ";
   cin >> upperLimit;
while (upperLimit < lowerLimit)
    {
        cout <<"Enter upper limit >= lowerLimit ";
        cin >> upperLimit;
    }
   int k=1,
       digit,
       num,
       num1;
for (int i=lowerLimit;i<=upperLimit;i++)
    {
    num=i;
    num1=0;
    while (num>0)
        {
        digit = num % 10;
        num1= num1+digit;
        num=num/10;
        if (num>0)
            num1=num1*10;
        }
    if (i==num1)
        {
            cout <<i <<" ";
            k=k+1;
        }
    if (k%6==0)
        {
        cout <<"\n";
        k=1;
        }
    }
}
