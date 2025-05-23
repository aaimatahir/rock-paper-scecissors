#include<iostream>
const char Rock = 'r';
const char Paper = 'p';
const char Scissor = 's';

using namespace std;
char getcomputerchoice() {
	srand(time(0));
	int num = rand() % 3 - 1;

	if (num == 1)return 'r';
	if (num == 2)return 'p';
	if (num == 3)return's';
}
void showselectionchoice(char option) {
    if (option == 'r')cout << "rock" << endl;
    if (option == 'p')cout << "Paper" << endl;
    if (option == 's')cout << "Scissors" << endl;

}
void chooseWinner(char uChoice, char cChoice) {
    if (uChoice == Rock && cChoice == Paper) {
        cout << "Computer Wins! Paper wraps Rock." << endl;
    }
    else if (uChoice == Paper && cChoice == Scissor) {
        cout << "Computer Wins! Scissors cut Paper." << endl;

    }
    else if (uChoice == Scissor && cChoice == Rock) {
        cout << "Computer Wins! Rock smashes Scissors." << endl;

    }
    else if (uChoice == Rock && cChoice == Scissor) {
        cout << "You Win! Paper wraps Rock." << endl;

    }
    else if (uChoice == Paper && cChoice == Rock) {
        cout << "You Win! Paper wraps Rock." << endl;

    }
    else if (uChoice == Scissor && cChoice == Paper) {
        cout << "You Win! Scissors cut Paper." << endl;
    }
    else {
        cout << "Tie. Play again win the Game." << endl;
    }
}
char getuserchoice() {
	char c;
    char more;
    do {
       cout << "Rock, Paper and Scissors Game" << endl;
        cout << "choce one of the following options:" << endl;
        cout << " --------------------------------------" << endl;
        cout << "'r' for Rock" << endl << "'p'for Paper" << endl << "'s'for Scissors" << endl;
        cin >> c;

        while (c != 'r' && c != 'p' && c != 's') {
            cout << "please enter one of the options" << endl;
            cout << "'r' for Rock" << endl << "'p'for Paper" << endl << "'s'for Scissors" << endl;
            cin >> c;

            char  cChoice;
            char uChoice;

            uChoice = getuserchoice();
            cout << "your choice is:" << endl;
            showselectionchoice(uChoice);

            cout << "Computer's choice is: " << endl;
            cChoice = getcomputerchoice();
            showselectionchoice(cChoice);

            chooseWinner(uChoice, cChoice);



            cout << "You want to play more" << endl << "Press y for yesand n for no" << endl;
            cin >> more;
        }
    } while (more!='n');
    return c;
}
int main() {
    getuserchoice();
    return 0;
}
