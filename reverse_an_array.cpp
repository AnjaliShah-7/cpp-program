#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,5,8,2,9};
     int i=0;
    int j=4;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
}