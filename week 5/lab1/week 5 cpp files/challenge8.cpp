#include<iostream>
using namespace std;
main()
    {
string player1;
cout<<"Player 1: ";
cin>>player1;

string player2;
cout<<"Player 2: ";
cin>>player2;

if (player1=="rock" && player2=="scissors"){
    cout<<"player 1 wins";
}
if (player1=="scissors" && player2=="rock"){
    cout<<"player 2 wins";
}
if (player1=="paper" && player2=="rock"){
    cout<<"player 1 wins";
}
if (player1=="rock" && player2=="paper"){
    cout<<"player 2 wins";
}
if (player1=="paper" && player2=="scissors"){
    cout<<"player 2 wins";
}
if (player1=="scissors" && player2=="paper"){
    cout<<"player 1 wins";
}
if (player1=="rock" && player2=="rock"){
    cout<<"It's a draw";
}
if (player1=="scissors" && player2=="scissors"){
    cout<<"It's a draw";
}
if (player1=="paper" && player2=="paper"){
    cout<<"It's a draw";
}
    }