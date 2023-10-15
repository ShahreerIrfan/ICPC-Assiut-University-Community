#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,result = 0;
    char c;
    cin>>a;
    cin>>c;
    cin>>b;

    if(c=='+'){
        result = (a+b);
    }
    else if(c == '-'){
        result = a-b;
    }

    else if(c == '*'){
        result = a*b;
    }

    else if(c == '/'){
        result = a/b;
    }
    cout<<result<<endl;
    // Hello
}