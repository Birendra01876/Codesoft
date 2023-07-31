#include<bits/stdc++.h>
using namespace std;
int main(){
    int ID;
    string Name;
    int marks;
   cout<<"Enter the ID number:"<<endl;
   cin>>ID;
   cout<<"Enter the Name of the Student:"<<endl;
    cin>>Name;
    cout<<"Enter the Total Marks:"<<endl;
    cin>>marks;
     if(marks>90 && marks<=100){
        cout<<"Grade: A+"<<endl;
    }
    else if(marks>80 && marks<=90){
        cout<<"Grade: A";
    }
    else if(marks>70 && marks<=80){
        cout<<"Grade: B+";
    }
        else if(marks>60 && marks<=70){
        cout<<"Grade: B";
    }
    else if(marks>50 && marks<=60){
        cout<<"Grade: C";
    }
    else if(marks>40 && marks<=50){
        cout<<"Grade: D";
    }
    else if(30>=marks && marks>=0){
        cout<<"Grade: F";
    }
    else{
        cout<<"invalid.";
    }
}