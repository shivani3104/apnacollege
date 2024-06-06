//outerloop:no of rows innerloop:noof columns/each row
//workin innerloop(each row)
//hollow pattern 
//general formula for pattern i,n-i,(n-i+1),(n-i-1); 

#include <iostream>
using namespace std;

int main()
{
    int n;
    int ch=1;

    cout<<"enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        //number
        for(int j=1;j<=i;j++)
        {
            cout<<ch++<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}

//1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15