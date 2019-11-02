#include <iostream>

using namespace std;

int wys,szer,i,l,m,n,z;
int main()
{
    cout << "podaj wysokosc prostokata" << endl;
    cin>>wys;
    cout << "podaj szerokosc prostokata" << endl;
    cin>>szer;

    for(i=0;i<=szer;i++)
    {
    cout<<"X";
    }
    cout<<endl;

    for(l=0;l<=wys-2;l++)
    {
    cout<<"L";

    for(m=0;m<=szer-2;m++)
    {
    cout<<"S";
    }
    for(n=1;n<=1;n++)

    {
    cout<<"P";
    //cout<<endl;
    }
    cout<<endl;
}
for(z=0;z<=szer;z++)
    {
    cout<<"X";
    }
    cout<<endl;
    return 0;
}
