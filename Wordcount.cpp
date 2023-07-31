#include<iostream>
#include<string>
using namespace std;
int main(){
    char line[100];
    cout<<"Enter a line of text:"<<endl;
    cin.getline(line,100);
    int word=1;
    for(int i=0; i<=100; i++){
        if(line[i]==' ') // if there is a space do action
        {
           word++;
        }
    } 
    cout<<"\nNumber of Words:"<<word;
}