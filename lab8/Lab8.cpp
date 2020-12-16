#include <iostream>
#include <ctime>
using namespace std;
int** createMatrix(int, int);
void inputMatrix(int **, int);
void outputMatrix(int **, int);
int searchMax(int **,int , int, int);
void deleteMatrix(int **,int);
int main()
{
    srand(time(NULL));
    int n;
    cout<<"Enter number rows and columns: ";
    cin>>n;
    if (n>0)
    {
        int **MatrixA=createMatrix(n,n);
        inputMatrix(MatrixA,n);
        cout<<"Matrix: \n";
        outputMatrix(MatrixA,n);
        int **MatrixB=createMatrix(n,n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                MatrixB[i][j]=searchMax(MatrixA,n,i,j);
            }
        }
        cout<<"Result: \n";
        outputMatrix(MatrixB,n);
        deleteMatrix(MatrixA,n);
        deleteMatrix(MatrixB,n);
    }
    else
    {
        cout<<"Enter correct data!";
    }
    return 0;
}

int** createMatrix(int n, int m)
{
    int **Matrix= new int *[n];
    for(int i=0;i<n;i++)
    {
        Matrix[i]= new int [m];
    }
    return Matrix;
}

void inputMatrix (int **Matrix, int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            *(*(Matrix+i)+j)=rand()%30+1;
        }
    }
}

void outputMatrix (int **Matrix, int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%6d",*(*(Matrix+i)+j));
        }
        cout<<"\n";
    }
    cout<<"\n";
}

int searchMax(int **Matrix,int n, int a, int b)
{
    int x1,
        x2;
    int maxE=0;
    for (int i=0;i<n;i++)
    {
        x1=a+b-i,
        x2=i+b-a;
        if (x2>=n)
            x2=n;
        if (x1<0)
        {
            for (int j=0; j<x2;j++)
            {
                if (Matrix[i][j]>maxE)
                    maxE=Matrix[i][j];
            }
        }
        else
        {
            for (int j=x1+1;j<x2;j++)
            {
                if (Matrix[i][j]>maxE)
                    maxE=Matrix[i][j];
            }
        }
    }
    return maxE;
}

void deleteMatrix(int **Matrix,int n)
{
     for(int i=0;i<n;i++)
    {
        delete[] Matrix[i];
    }
    delete[] Matrix;
}
