#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;

    
//1st pyramid
    for(int i=1;i<=n;i++)
    {
        //space
       for(int j=1;j<=n-i;j++)
       {
              cout<<" ";
        }
        //star
       for(int j=1;j<=n;j++)
       {
              cout<<"*";
        } 
       cout<<endl;
    }
    return 0;
}