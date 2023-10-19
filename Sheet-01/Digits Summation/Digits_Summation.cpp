#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int N,M;
    cin>>N>>M;
    long long first_digit = N%10;
    long long last_digit = M%10;
    long long result = (first_digit+last_digit);
    cout<<result<<endl;
    return 0;
}