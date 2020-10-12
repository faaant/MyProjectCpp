#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double s,r,s1;

cout << "s = "; cin>>s;
while (s<=0) {cout<<"Vvedit korektny ploschy s." <<"\n" <<"s = "; cin>>s;}
s1 = s/2;
cout<<"Ploscha menshogo kvadrata = " <<s1 <<"\n" <<"\n";
cout<<"Ploscha vpusanogo kvadrata mensha nizh opusanogo v 2 razu" <<"\n";

}
