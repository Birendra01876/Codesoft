#include<bits/stdc++.h>
using namespace std;
int main(){
    void guess();
    //Random number
    srand(time(0));
    int random=rand()%100;
    //user input
    int user_guess;
    int Scores=0;
cout<<"Enter a number between 1 to 100"<<endl;
cin>>user_guess;
while(user_guess!=random){
    Scores++;
    if(user_guess>random){
        cout<<"Sorry your guess is greater than random number."<<endl;
        cout<<"Please try again"<<endl;
        cin>>user_guess;
    }
    else if(user_guess<random){
         cout<<"Sorry your guess is smaller than random number."<<endl;
        cout<<"Please try again"<<endl;
        cin>>user_guess;
    }
    else{
        cout<<"Congratulation your guess is correct."<<endl;
    }
}
cout<<"your score is:"<<Scores;
}
