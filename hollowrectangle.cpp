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
        cout<<"*";//first
        for(int j=1;j<=n-1;j++)
        {
            if(i==1||i==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
            
        }
        cout<<"*"<<endl;//last
    }
    return 0;
}