#include<iostream>
using namespace std;

int first_occurence(int arr[],int n,int target)
{
    int start=0,end=n-1,first=-1,last=-1,mid;
    while(start<=end){
        mid=start+((end-start)/2);
        if(arr[mid]==target){
            first=mid;
            end=mid-1;

        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return first;
    
}

int last_occurence(int arr[],int n,int target)
{
    int start=0,end=n-1,last=-1,mid;
    while(start<=end){
        mid=start+((end-start)/2);
        if(arr[mid]==target){
            last=mid;
            start=mid+1;

        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return last;
}
int main(){
    int arr[1000];
    int n;
    cout<<"ENTER THE NO. OF ELEMENTS IN THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY IN SORTED ORDER :";
    for(int i=0;i<n;i++)
    cin>>arr[i];
     int target;
    cout<<"ENTER THE ELEMENT TO BE SEARCHED:";
    cin>>target;

    first_occurence(arr,n,target);
    cout<<"FIRST OCCURENCE :"<<first_occurence(arr,n,target)<<endl;
    last_occurence(arr,n,target);
    cout<<"LAST OCCURENCE :"<<last_occurence(arr,n,target)<<endl;

    return 0;
}