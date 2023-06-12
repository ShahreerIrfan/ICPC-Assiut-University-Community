#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int last_digit = num/1000;
    if(last_digit%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
}