
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    
    int sum = 1;
    for(int i=1;i<=n;i++){
        
        sum = sum*i;
    }
    cout<<n<<"!"<<" factorial is : "<<sum;

 return 0;
}
