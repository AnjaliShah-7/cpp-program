#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"ENTER THE YEAR:";
    cin>>year;
    if(year%400==0){
        cout<<"LEAP YEAR";
    }
    /*else if(year%4==0 )
         {
             if(year%100==0)
            {
                cout<<"NOT A LEAP YEAR";
             }
            else{
              cout<<"LEAP YEAR";

            }
         }*/

    else if(year%4==0 && year%100!=0){
        cout<<"LEAP YEAR";
    }     
    else{
        cout<<"NOT A LEAP YEAR";
    }
    }
