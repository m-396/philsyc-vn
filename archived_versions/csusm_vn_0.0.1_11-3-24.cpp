#include<iostream>
using namespace std;

void introName();
void continueGame();
// maybe a function for where user inputs their name?
void twoChoice(string prompt, string yes, string no);

int main()
{
  introName();
  continueGame();

  twoChoice("You face a fork. Enter \"A\" to turn left, or \"B\" to turn right: ", "You turned left.", "You turned right.");
  
  return 0;
}

void introName()
{
  cout << endl;
  for (int i = 1; i <= 25; i++)
    cout << "=";
  cout << endl;
  
  cout << "== WELCOME TO CSUSM_VN ==" << endl;
  
  for (int i = 1; i <= 25; i++)
    cout << "=";
  cout << endl << endl;
}

void continueGame()
{
  cout << "Press ENTER to continue: ";
  cin.ignore(1000, '\n');
  cout << endl;
}

void twoChoice(string prompt, string yes, string no)
{
  char option;
  
  cout << prompt;
  cin >> option;

  cout << endl;
  
  if (option == 'A' || option == 'a')
    cout << yes << endl;
  else if (option == 'A' || option == 'b')
    cout << no << endl;
  else
    cout << "Invalid!!!" << endl;
  cout << endl;
} 
