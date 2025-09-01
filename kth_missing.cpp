//O(log n) using binary search
#include<iostream>
using namespace std;

int findkthmissing(int arr[],int n,int k){
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start+((end-start)/2);
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans+k;
}

int main(){

int arr[1000];
int n;
cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY:";
cin>>n;
cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
for(int i=0;i<n;i++)
cin>>arr[i];
int k;
cout<<"ENETR THE VALUE OF K:";
cin>>k;

findkthmissing(arr,n,k);
cout<<"KTH MISSING POSITIVE NUMBER IS:"<<findkthmissing(arr,n,k)<<endl;
return 0;

}
