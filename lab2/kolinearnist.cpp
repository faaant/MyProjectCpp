#include <iostream>

using namespace std;

int main()
{
    double a1,a2,a3,b1,b2,b3; //¬водимо координати вектор≥в a та b
    cin >> a1 >>a2 >>a3 >>b1 >>b2 >>b3;
    if (a1/b1==a2/b2)
    {   if (a2/b2==a3/b3) {cout << "Vektoru kolinearni";}
        else {cout << "Vektoru ne kolinearni";}
    } else {cout <<"Vektoru ne kolinearni";}
    return 0;
}
