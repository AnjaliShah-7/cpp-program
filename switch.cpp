#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Value of i:";
    cin>>i;
    switch(i){
        case 1:
        cout<<"MON"<<endl;
        break;
        case 2:
        cout<<"TUE"<<endl;
        break;
        case 3:
        cout<<"WED"<<endl;
        break;
        case 4:
        cout<<"THU"<<endl;
        break;
        case 5:
        cout<<"FRI"<<endl;
        break;
        case 6:
        cout<<"SAT"<<endl;
        break;
        case 7:
        cout<<"sun"<<endl;
        break;
        default:
        cout<<"enter valid day"<<endl;
        
    }
}