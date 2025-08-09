#include<iostream>
using namespace std;
int main(){
    int index=-1;
    int i,x;
    cout<<"ENNTER NUMBER TO BE SEARCHED:";
    cin>>x;
    int arr[5]={4,6,3,8,9};
    for(int i=0;i<5;i++)
    {  if (arr[i]==x){
        index = i;
        break;
    }
}
    if (index != -1) {
        cout << "NUMBER FOUND AT INDEX: " << index << endl;
    } else {
        cout << "NUMBER NOT FOUND" << endl;
    }
}
