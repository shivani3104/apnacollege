#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"year";
    cin>>year;
    
    if(year%400==0)
    {
        cout<<year<<"isaleapyear.\n";
    }
    else if(year%100==0)
    {
        cout<<year<<"isNOTaleapyear.\n";
    }
    else if(year%4==0)
    {
        cout<<year<<"isaleapyear.\n";
    }
    else
    {
        cout<<year<<"isNOTaleapyear.\n";
    }
    return 0;
    }