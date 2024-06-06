//outerloop:no of rows innerloop:noof columns/each row
//workin innerloop(each row)
//hollow pattern 
//general formula for pattern i,n-i,(n-i+1),(n-i-1); 

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
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