#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
void inputMas(double *m,int n);
void maxSub(double b[], int n);
void minSub(double b[], int n);
int main()
{
    srand(time(NULL));
    int n=0;
    while (n<2)
    {
        cout << "Enter the number of elements in the array (n>=2) : ";
        cin >> n;
    }
    double B[n];
    inputMas(&B[1],n);
    maxSub(B,n);
    minSub(B,n);
    return 0;
}

void inputMas(double *m, int n)
{


    for (int i=1; i<=n;i++)
    {

        *m=(rand()%50-24)*0.123;
        cout << *m << " ";
        m++;
    }
    cout <<"\n";
}

void maxSub(double b[], int n)
{
    double maxS=0;
    for (int i=1; i<n;i++)
        {
            if (fabs(b[i]-b[i+1])>maxS)
            {
                maxS=fabs(b[i]-b[i+1]);
            }
        }
    cout<<"\n" <<"Max subtraction is :" << maxS <<"\n";
}

void minSub(double b[], int n)
{
    double minS= fabs(b[1]-b[2]);
    for (int i=2; i<n;i++)
        {
            if (fabs(b[i]-b[i+1])<minS)
            {
                minS=fabs(b[i]-b[i+1]);
            }
        }
    cout<<"\n" <<"Min subtraction is :" << minS <<"\n";
}
