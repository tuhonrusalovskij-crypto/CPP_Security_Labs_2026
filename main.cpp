#include<iostream>
using namespace std;
int main(){
    cout<<"Hello, World!\nRusalovskij Tihon Gennadjevich\nKBPs-61"<<endl;
    int a,b;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"A+B="<<a+b<<endl;
    cout<<"A*B="<<a*b<<endl;
    cout<<"A-B="<<a-b<<endl;
    if(b!=0){
        cout<<"A//B="<<a/b<<endl;
        cout<<"A%B="<<a%b<<endl;
        cout<<"A/B="<<float(a)/b<<endl;
    }else{cout<<"ZeroDivError"<<endl;};
};