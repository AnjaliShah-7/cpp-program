#include<iostream>
using namespace std;

int find_pos(int arr[],int n,int target){
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start+((end-start)/2);
        if(arr[mid]==target){
            ans=mid;
            break;

        }
        else if(arr[mid]<target){
            start=mid+1;

        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
}

int main(){
    int arr[1000];
    int n;
    cout<<"ENTER THE NO. OF ELEMENTS IN THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int target;
    cout<<"TARGET:";
    cin>>target;

    cout<<"POSITION OF THE ELEMENT:"<<find_pos(arr,n,target)<<endl;
}