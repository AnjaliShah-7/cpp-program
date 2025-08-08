#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,sum;
    cout<<"ENTER THE NUMBER:";
    cin>>num;
    while(num>10){
        int ans=0,rem;
      while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+rem;
  
    }
   num=ans;
}
    cout<<num;
 
}