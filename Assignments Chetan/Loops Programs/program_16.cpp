#include<iostream>
using namespace std;

/*
Program #16 - Write a program for matchstick game between the computer and the user.  Your program should ensure that the computer always wins. Rules for the game are as follows:				a. There are 21 matchsticks 
    b. The computer asks the player to pick 1, 2, 3, or 4 matchsticks.					
    C. Player is given the chance to pick the sticks first then the computer picks the sticks.		
    d. Whoever is forced to pick up the last matchstick loses the game. 

    Author: Chetan Bhadane
    Date  : 10-Mar-2024
    Course: DAC 
    
*/

int main() {

	int sticks = 21;
	int comp;
	int pick;
	while(1){
	
		cout<<"enter your choice 1,2,3,4 "<<endl;
		cin>>pick;

		if(pick>4 || pick<1){
			continue;
		}

		cout<<"Remaining sticks are: "<<endl;
		sticks = sticks - pick;
		cout<<sticks<<endl;

		cout<<"Computer picks"<<endl;
		comp = 5 - pick; // 5-2 = 3
		cout<<comp<<endl;

		cout<<"Remaining stick are: "<<endl;
		sticks = sticks-comp;
		cout<<sticks<<endl;

		if(sticks == 1){
			cout<<"Number of matches left: "<<sticks;
			cout<<"\nYou Lose Loser! As Always!"<<endl;
			break;
		}
	}

	return 0;
}

