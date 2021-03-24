
#include<iostream>
using namespace std;
int main(){
    while(true){
    
        int n;
        cout<<"keep printing the number of table that u want:-";
        cin>>n;
        cout<<"hear is u r ";
        cout<<n;
        cout<<" table"<<endl;
        for(int i=1;i<=10;i++){
                       
            cout<<n;
            cout<<"*";
            cout<<i;
            cout<<"=";
            cout<<i*n<<endl;
        }

    }    
    return 0;
}
