/*
     1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
1 2 3 4 5 6 

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(int p=1;p<=i;p++){
            cout<<p<<" ";
        }

        cout<<endl;
    }

 return 0;

}