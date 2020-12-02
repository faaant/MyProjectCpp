#include <iostream>
#include <cmath>

using namespace std;
double square (double a, double b, double c);

int main()
{   double  a,
            a1,
            a2,
            n=0,
            s=0,
            s1=0;
    for (int i=1; i<=3;i++)    //Entering sides of triangles
    {
        cout << "Enter sides of the triangle\n";
        cin >> a >> a1 >> a2;
        while ((a<=0)||(a1<=0)||(a2<=0))  //Data verification
            {
            cout << "Enter correct sides of the triangle\n";
            cin >> a >> a1 >> a2;
            }
        s= square(a,a1,a2);
        if (s>s1)
        {
          n=i;    //Number of the triangle with the largest square
          s1=s;
        }

        if (s>0)
        {
            cout <<"s= " <<s <<endl <<"\n";
        }
        else
        {
            cout<<"Triangle does not exist!" <<endl <<"\n";
        }
    }
    cout <<n <<" triangle has the largest square.";
    return 0;
}

double square (double a, double b, double c)    //Calculating square of triangle
{
    double pivP (double a, double b, double c); //Calculating half-perimetr
    double p = pivP(a,b,c);
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double pivP (double a, double b, double c)
{
    return (a+b+c)/2;
}
