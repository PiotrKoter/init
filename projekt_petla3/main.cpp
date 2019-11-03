#include <iostream>

using namespace std;

int wys,szer,grub;
int main()
{
    cout << "Podaj wysokosc"<< endl;
    cin>>wys;
    cout << "Podaj szerokosc"<<endl;
    cin>>szer;
    cout << "Podaj grubosc"<< endl;
    cin>>grub;

    for(int i=0;i<wys-grub;i++)
    {

    for(int z=0;z<grub;z++)
    {
    cout << "L";
    }
    cout << endl;
    }

    for(int s=0;s<grub;s++)
    {
    for( int k=0;k<szer;k++)
    {
     cout << "L";
    }
    cout << endl;
    }



    return 0;
}
