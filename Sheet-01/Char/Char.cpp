#include<bits/stdc++.h>
using namespace std;
int main(void){
    char c;
    cin>>c;
    if(c>='a'&& c<='z'){
        cout<<(char)toupper(c)<<endl;
    }
    else if(c>='A'&& c<='Z'){
        cout<<(char)tolower(c)<<endl;
    }
    return 0;
}