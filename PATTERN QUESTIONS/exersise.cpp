/*
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    // int i=1;          //first method

    // while(i<=n){
        
    //     int j=1;
    //     int result=i;
    //     while(j<=i){
            
    //         cout<<result<<" ";

    //         result=result+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    int i=1;  //second method
    while(i<=n){
        
        int j=1;
        while(j<=i){          
            cout<<i+j-1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    
 return 0;
}