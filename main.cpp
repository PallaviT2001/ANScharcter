#include <QCoreApplication>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
    {
     cout<<" The given character is alphabet"<<endl;
    }
    else if(ch>=0 && ch<=9)
    {
        cout<<"The given charater is numeric value"<<endl;
    }
    else
    {
        cout<<" The given character is a spacial symbol"<<endl;
    }
    return a.exec();
}
