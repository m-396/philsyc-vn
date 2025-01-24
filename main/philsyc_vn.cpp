// version 0.0.3

#include<iostream>
#include<iomanip>
using namespace std;

const int inventoryRow = 3;
const int inventoryCol = 5;

void introName()
{
  cout << endl;
  for (int i = 1; i <= 25; i++)
    cout << "=";
  cout << endl;
  
  cout << "== WELCOME TO PHILSYC_VN ==" << endl;
  
  for (int i = 1; i <= 25; i++)
    cout << "=";
  cout << endl << endl;
}

void continueGame()
{
  char ch;
  
  cout << "Press ENTER to continue: ";
  cin.get(ch);
  cout << endl;
}

// maybe a function for where user inputs their name?
void twoChoice(string prompt, string yes, string no)
{
  char option;

  do
    {
      cout << prompt;
      cin >> option;
    } while (option != 'A' && option != 'a' && option != 'B' && option != 'b');
      
  cout << endl;
  
  if (option == 'A' || option == 'a')
    cout << yes << endl;
  else if (option == 'B' || option == 'b')
    cout << no << endl;
  cout << endl;
} 

void playerInventory(const int inventory[][inventoryCol])
{

  cout << "=====================" << endl;
  cout << "======= ITEMS =======" << endl;
  cout << "=====================" << endl << endl;
  
  for (int row = 0; row < inventoryRow; row++)
    {
      cout << setw(3) << row + 1 << ":";

      for (int col = 0; col < inventoryCol; col++)
	cout << setw(3) << inventory[row][col];

      cout << endl;
    }
  cout << endl;
}

void oneDialogue(string prompt)
{
  char ch;
  cin.ignore(1000, '\n');
  
  cout << "\t" << prompt << " 'ENTER' to continue.";
  cin.get(ch);
}

int main()
{
  int playerInv[inventoryRow][inventoryCol] = { {1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, {2, 2, 2, 2, 2} };

  introName();
  continueGame();

  playerInventory(playerInv);
  
  twoChoice("You face a fork. Enter \"A\" to turn left, or \"B\" to turn right: ", ">> You turned left.", ">> You turned right.");
  oneDialogue("What the hell? How did you end up here?");
  
  cout << endl << "everything worked." << endl;
  return 0;
}
