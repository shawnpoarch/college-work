//Shawn Poarch
//(03/14/21)
//Program that is a simple card game that uses 
//4 seperate switch statements and an if statement
//plus a random generator to randomly chose a face 
//card and a suit and determin a winner

#include<iostream> //libraries
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>

using namespace std;    //namespace
int main() //begins main method block
    {
    //variables used and initializations
        unsigned cards = time(0); //initializes random generators
        srand(cards);

        const int Max_Value = 4;//declared constants so randoms have a min and max value to work with
        const int Min_Value = 1;   
        string player1;
        string player2;
        int Face;
        int Suite;
        int Face2;
        int Suite2;         
 ///
 ///begins prompts from player for name and starts the
 /// random process where a number is generated between 1 and 4
 /// for Player1
 /// 
        cout << "Enter the Name of the First Player : \n";
        cin >> player1;
        Face = (rand() % (Max_Value - Min_Value + 1)) + Min_Value;
        Suite = (rand() % (Max_Value - Min_Value + 1)) + Min_Value;
 ///
 ///begins prompts from player for name and starts the
 /// random process where a number is generated between 1 and 4
 /// for Player1
 ///        
        cout << "Enter the Name of the Second Player : \n";
        cin >> player2;
        Face2 = (rand() % (Max_Value - Min_Value + 1)) + Min_Value;
        Suite2 = (rand() % (Max_Value - Min_Value + 1)) + Min_Value;
        
        cout << player1 << " drew ";
        
        switch (Face) //first switch generating a face card for player1
        {
            case 1: cout << "Jack";
                    break;
            case 2: cout << "Queen";
                    break;
            case 3: cout << "King";
                    break;
            case 4: cout << "Ace";
                    break;
            default: cout << "Not a face card!";
                break;                    
        }

        cout<< " of ";

        switch (Suite) // 2nd switch generating a suit for player 1
        {
            case 1: cout << "Clubs";
                    break;
            case 2: cout << "Diamonds";
                    break;                
            case 3: cout << "Hearts";
                    break;
            case 4: cout << "Spades";
                    break;
            default:cout << "error";
                break;
        }
        cout<< "\n";
        cout << player2 << " drew ";

        switch (Face2) //3rd switch generating a face card for player 2
        {
            case 1: cout<<"Jack";
                    break;
            case 2: cout << "Queen";
                    break;
            case 3: cout << "King";
                    break;
            case 4: cout << "Ace";
                    break;
            default: cout << "Not a face card!";
                break;
        }
        cout << " of ";

        switch (Suite2) // 4th switch generating a suit for player 2
        {
            case 1: cout << "Clubs";
                    break;
            case 2: cout << "Diamonds";
                    break;
            case 3: cout << "Hearts";
                    break;
            case 4: cout << "Spades";
                    break;
                default:cout << "error";
                break;
        }
        cout << "\n";
 ///
 ///Conditional if statement to determin a winner or a draw or rule violation
 /// 
        if (Face > Face2)
            cout << player1 << " wins the Game !";
        else if (Face == Face2)
        {
            if (Suite == Suite2)
                cout << " Violation of Rules! \n " << "Game is void!";
            else
                cout << " The game is a draw. \n";
        }
        else
            cout << player2 << " wins the Game !";
        
        return 0;
}//end of main




