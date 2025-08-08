#include<iostream>
using namespace std;
int main(){
    int ans=0,rem,n;
    cout<<"Enter Number:";
    cin>>n;
    while (n!=0)
    {
        rem=n%10;
        n=n/10;
        if((ans>INT32_MAX/10)||(ans<INT32_MIN/10))
        return 0;
        ans=ans*10+rem;

    }
  cout<<ans;
   

    
}