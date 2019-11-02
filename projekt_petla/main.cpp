#include <iostream>

using namespace std;

int wys,szer,i,l,m,n,z;
int main()
{
    cout << "podaj wysokosc prostokata" << endl;
    cin>>wys;
    cout << "podaj szerokosc prostokata" << endl;
    cin>>szer;

    for(i=1;i<=szer;i++)
    {
    cout<<"X";
    }
    cout<<endl;

    for(l=1;l<=wys-2;l++)
    {
    cout<<"X";

    for(m=1;m<=szer-2;m++)
    {
    cout<<" ";
    }
    for(n=1;n<=1;n++)

    {
    cout<<"X";
    //cout<<endl;
    }
    cout<<endl;
}
for(z=1;z<=szer;z++)
    {
    cout<<"X";
    }
    cout<<endl;
    return 0;
}
