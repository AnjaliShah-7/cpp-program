#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={5,8,3,3,7};
    int i;
    //MInimum element 
    int ans=INT_MAX;
    for(i=0;i<5;i++){
        if(ans>arr[i]){
            ans=arr[i];

        }
    }cout<<"Minimum Element:"<<ans<<endl;

    //maximum element
     ans=INT_MIN;
    for(i=0;i<5;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }cout<<"Maximum Element:"<<ans<<endl;
    return 0;
}
