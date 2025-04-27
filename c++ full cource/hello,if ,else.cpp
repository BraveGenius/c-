#include<iostream>
using namespace std;
int main(){
    cout<<"hello world!\n";
    //cout<<endl;

    cout<<"enter the savings :";
    int savings;
    cin>>savings;

    if(savings>5000) {
        //cout<<"neha ke shath soaping\n :";
        if(savings>10000){
            cout<<"roadtrip with neha\n";
        }
        else{
            cout<<"shopping with neha\n";
        }
    }
        else if(savings>2000)
        {
            cout<<"rashmi ke soaping\n :";
        }
        else{
            cout<<"friends ke soaping\n :";
        }
    }
        //return 0;
