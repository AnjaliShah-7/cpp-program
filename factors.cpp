#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    while(n>=i)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
           
        }
        i++;
    }

}