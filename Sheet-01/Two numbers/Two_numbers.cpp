#include<bits/stdc++.h>
using namespace std;
int main(){
    float A,B;
    cin>>A>>B;
    float floo_r = floor(A/B);
    float cii_l = ceil(A/B);
    float roun_d = round(A/B);
    cout<<"floor " <<A <<" / " <<B <<" = " <<floo_r<<endl;
    cout<<"ceil " <<A <<" / " <<B <<" = " <<cii_l<<endl;
    cout<<"round " <<A <<" / " <<B <<" = " <<roun_d<<endl;
}