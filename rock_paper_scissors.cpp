#include <ctime>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
-- v1.0 --
1. Rock
2. Paper
3. Scissors
-- v1.1 --
+ option for arrange of game lengths
-- v1.2 --
4. Lizard
5. Spock
*/

int main() {

  // declare vars
  int user = 0;
  int counter = 0;
  int u_score = 0;
  int c_score = 0;

  // intro ascii
  cout << endl << "******************************************" << endl;
  cout << "**			v1.0			 	   " << endl;
  cout << "**    Rock, Paper, Scissors, Lizard (v1.1), Spock (v1.1)   " << endl;
  cout << "**    by: Nicholas Savory 11/04/2019		   " << endl;
  cout << "**								"
          "			   "
       << endl;
  cout << "******************************************" << endl << endl;

  // question
  cout << "How many games?";
  cout << "Best out of 3";
  cout << "Best out of 5";
  cout << "Best out of 7";


  // logic
  do {

    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Lizard" << endl;
    cout << "5. Spock" << endl;

    // refresh guess
    srand(time(NULL));

    // cpu guess
    int cpu = rand() % 3 + 1;

    // ask for user choice
    cout << endl << "[SCORE USER/CPU] : " << u_score << ":" << c_score << endl;
    cout << endl << "What is your selection? ";
    cin >> user;

    if (user == cpu) {
      cout << "It's a draw." << endl;
    } else if (user > 3) {
      cout << "Invalid entry." << endl;
      // user start
    } else if (user == 1 && cpu == 2) {
      cout << "Cpu wins this round!" << endl;
      counter++;
      c_score++;
    } else if (user == 1 && cpu == 3) {
      cout << "User wins this round!" << endl;
      counter++;
      u_score++;
    } else if (user == 2 && cpu == 1) {
      cout << "User wins this round!" << endl;
      counter++;
      u_score++;
    } else if (user == 2 && cpu == 3) {
      cout << "Cpu wins this round!" << endl;
      counter++;
      c_score++;
    } else if (user == 3 && cpu == 1) {
      cout << "Cpu wins this round!" << endl;
      counter++;
      c_score++;
    } else if (user == 3 && cpu == 2) {
      cout << "User wins this round!" << endl;
      counter++;
      u_score++;
      // user end & cpu start
    } else if (user == 2 && cpu == 1) {
      cout << "User wins!" << endl;
      counter++;
      u_score++;
    } else if (user == 3 && cpu == 1) {
      cout << "Cpu wins this round!" << endl;
      counter++;
      c_score++;
    } else if (user == 1 && cpu == 2) {
      cout << "Cpu wins this round!" << endl;
      counter++;
      c_score++;
    } else if (user == 3 && cpu == 2) {
      cout << "User wins this round!" << endl;
      counter++;
      u_score++;
    } else if (user == 1 && cpu == 3) {
      cout << "User wins this round!" << endl;
      counter++;
      u_score++;
    } else if (user == 2 && cpu == 3) {
      cout << "Cpu wins this round!" << endl;
      counter++;
      c_score++;
      // cpu end
    } else {
      cout << "Something went wrong!" << endl;
      break;
    }

  } while (counter < 3);

  if (u_score || c_score > 0) {
    cout << endl << endl << "FINAL SCORE" << endl;
    cout << "===========" << endl;
    cout << "USER:" << u_score << endl;
    cout << "CPU:" << c_score << endl;
    cout << "===========" << endl << endl;

    if (u_score > c_score) {
      cout << "User is the overall winner!" << endl;
    } else {
      cout << "Cpu is the overall winner!" << endl;
    }
  }

  return 0;
}