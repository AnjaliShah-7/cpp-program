#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[7]={2,6,4,3,8,5,1};
    int i;
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for (int i=0;i<7;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest=arr[i];
        }
        else if
        (arr[i]>second_largest && arr[i]!=largest){
        second_largest=arr[i];

        }
    }
    
    if (second_largest == INT_MIN)
        { 
            cout<<"NO SECOND LARGEST"<<endl;
        }
    else{
            cout<<"SECOND LARGEST ELEMENT IS:"<<second_largest<<endl;
        }
        return 0;
    }
    
