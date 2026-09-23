#include<iostream>
using namespace std;
int main(){
    float inp,kbsize,mbsize,gbsize;
    cout<<"FileSize: ";
    cin>>inp;
    kbsize=inp/1000.0f;
    mbsize=float(int(inp/1000))/1000.0f;
    gbsize=float(int(inp/1000000))/1000.0f;
    cout<<"\n"<<kbsize<<" KB\n"<<mbsize<<" MB\n"<<gbsize<<" GB"<<endl;
};