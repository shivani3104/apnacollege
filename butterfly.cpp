//outerloop:no of rows innerloop:noof columns/each row
//workin innerloop(each row)
//hollow pattern
//diamond ke star is odd so use 2*i-1 
//general formula for pattern i,n-i,(n-i+1),(n-i-1); 

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter n: ";
    cin>>n;

//1st pyramid
     for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
            
        }
         for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
            
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
            
        }

        cout<<endl;
    }

    //2nd pu=yramid

    for(int i=n;i>=1;i--)
    {
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
            
        }
         for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
            
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
            
        }

        cout<<endl;
    }
    return 0;
}

