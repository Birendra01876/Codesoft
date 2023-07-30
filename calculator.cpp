#include<bits/stdc++.h>
using namespace std;
int main(){
    void cal();
    int num1,num2;
    char operat;
    cout<<"Enter the two Numbers:";
    cout<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operator:";
    cout<<endl;
    cin>>operat;
    switch(operat){
        case '+':cout<<"Result:"<<num1+num2;
        break;
        case '-':cout<<"Result:"<<num1-num2;
        break;
        case '*':cout<<"Result:"<<num1*num2;
        break;
        case '/':cout<<"Result:"<<num1/num2;
        break;
        case '%':cout<<"Result:"<<num1 % num2;
        break;
        default: cout<<"Invalid"<<endl;
        break;
    }
    
}
