#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int num;
    while(cin>>num){
        if(num<=33&&num>1){
            cout<<"Arektu boro number lagbe"<<endl;
            cout<<"Arekta number dao : ";
        }
        else if(num>33&&num<=66){
            cout<<"Ei number hobe na"<<endl;
            cout<<"Arekta number dao :";
        }

        else if(num>66&&num<=100){
            cout<<"Number ta beshi boro"<<endl;
            cout<<"Arekta number dao :";
        }

        else{
            cout<<"Number ta 100 theke boro"<<endl;
            cout<<"Arekta number dao :";
        }
    }
    
}