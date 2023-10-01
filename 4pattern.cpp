// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter the number a :";
//     cin>>n;
//     cout<<"enter the number b :";
//     cin>>m;
    
    
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=m; j++){
//             cout<<"*";
//         }
//         cout<<endl;
        

//     }
//     return 0;
// }
//////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//      int n,m;
//     cout<<"Enter the number a :";
//     cin>>n;
//     cout<<"enter the number b :";
//     cin>>m;
//      for(int i=1; i<=n;i++){
//         for(int j=1; j<=m; j++){
//             if(i==1 || i==n || j==1 ||j==m )
//             cout<<"*";
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;  

//     }
 
//     return 0;
// }
//////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number a :"
    
//     cin>>n;

//     for(int i=n; i>=1; i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
    
//     }
//     return 0;
// }
//////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number a :";
    
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }else{
//             cout<<"* ";
//             }
//         }
//         cout<<endl;
    
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number a :";
    
    cin>>n;
     for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
    
    for(int i=n; i>=1; i--){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
    return 0;
}
