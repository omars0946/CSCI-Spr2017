#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;



/* Rock Paper Scissors Lizard Spock Game – The computer chooses one of the three options and the user chooses one.
The computer should determine who has won.  The game should play an option of best out of 3, 5, or 7 rounds.
The program should score the game for the user based on how many they win. */


class Game                  //declare class
{

    private:

    int Print_ ;
    public:
        Game();//default constructor
        
        Game(int userInput);

        //getters - setters
        void setRock(int userInput,int Generatednumber, int userOutcome, int compOutcome);
        void setPaper(int userInput, int Generatednumber, int userOutcome, int compOutcome);
        void setScissors(int userInput, int Generatednumber, int userOutcome, int compOutcome);
        void setLizard(int userInput, int Generatednumber, int userOutcome, int compOutcome);
        void setSpock(int userInput, int Generatednumber, int userOutcome, int compOutcome, int show);

        double getRock(int show);
        double getPaper(int show);
       

        void display(const char* Output, int Print_);
//default constructor
Game::Game()
{
       Print_ = 0;
}

//initialize the member variables to specific values
Game::Game(int userInput){

       Print_ =0;
      
}
void Game::setRock(int userInput, int Generatednumber, int userOutcome, int compOutcome)  {
    if (userInput == 1 && Generatednumber== 1){
        cout << "Tie! Retry" << endl;
         cout << "Rock[1] Paper[2] Scissors[3] Lizard[4] Spock[5]" << endl;
         cin >> userInput;

}
    else if (userInput == 1 && Generatednumber== 2){
        cout << "Paper beats Rock" << endl;
        compOutcome++ ;
    }
    else if (userInput == 1 && Generatednumber== 3){
        cout << "Rock beats Scissors" << endl;
        userOutcome++ ;
}
    else if (userInput == 1 && Generatednumber== 4){
        cout << "Rock crushes lizard" << endl;
        userOutcome++ ;
}
    else (userInput == 1 && Generatednumber== 5);{
        cout << "Spock vaporizes rock" << endl;
        compOutcome++ ;
    };
    return;
};
void Game::setPaper(int userInput, int Generatednumber, int userOutcome, int compOutcome)  {
    if (userInput == 2 && Generatednumber== 1){
        cout << "Paper beats Rock" << endl;
        userOutcome++ ;
        
}
    else if (userInput == 2 && Generatednumber== 2){
         cout << "Tie! Retry" << endl;
         cout << "Rock[1] Paper[2] Scissors[3] Lizard[4] Spock[5]" << endl;
         cin >> userInput;
    }
    else if (userInput == 2 && Generatednumber== 3){
        cout << "Scissors beat Paper" << endl;
        compOutcome++ ;
}
    else if (userInput == 2 && Generatednumber== 4){
        cout << "Lizard eats Paper" << endl;
        compOutcome++ ;
}
    else (userInput == 2 && Generatednumber== 5);{
        cout << "Paper disproves spock" << endl;
        userOutcome++ ;
    };
    return;
}
void Game::setScissors(int userInput, int Generatednumber, int userOutcome, int compOutcome)  {
    if (userInput == 3 && Generatednumber== 1){
        cout << "Rock crushes scissors" << endl;
        compOutcome++ ;
}
    else if (userInput == 3 && Generatednumber== 2){
        cout << "Scissors cut paper" << endl;
        userOutcome++ ;
    }
    else if (userInput == 3 && Generatednumber== 3){
        cout << "Tie! Retry" << endl;
         cout << "Rock[1] Paper[2] Scissors[3] Lizard[4] Spock[5]" << endl;
         cin >> userInput;
}
    else if (userInput == 3 && Generatednumber== 4){
        cout << "Scissors decapitate lizard" << endl;
        userOutcome++ ;
}
    else (userInput == 3 && Generatednumber== 5);{
        cout << "Spock smashed scissors" << endl;
        compOutcome++ ; 
    };
    return;
};
void Game::setLizard(int userInput, int Generatednumber, int userOutcome, int compOutcome)  {
    if (userInput == 4 && Generatednumber== 1){
        cout << "Rock crushed lizard" << endl;
        compOutcome++ ;
}
    else if (userInput == 4 && Generatednumber== 2){
        cout << "Lizard eats paper" << endl;
        userOutcome++ ;
    }
    else if (userInput == 4 && Generatednumber== 3){
        cout << "Scissors decapitates lizardr" << endl;
        compOutcome++ ;
}
    else if (userInput == 4 && Generatednumber== 4){
        cout << "Tie! Retry" << endl;
         cout << "Rock[1] Paper[2] Scissors[3] Lizard[4] Spock[5]" << endl;
         cin >> userInput;
}
    else (userInput == 4 && Generatednumber== 5);{
        cout << "Lizard poisons spock" << endl;
        userOutcome++ ;
    };
    return;
}
void Game::setSpock(int userInput, int Generatednumber, int userOutcome, int compOutcome, int show)  {
    if (userInput == 5 && Generatednumber== 1){
        show =1;
        userOutcome++ ;
}
    else if (userInput == 5 && Generatednumber== 2){
          show =2;
        compOutcome++ ;
    }
    else if (userInput == 5 && Generatednumber== 3){
        show = 3 ;
        userOutcome++ ;
}
    else if (userInput == 5 && Generatednumber== 4){
        show = 4;
        compOutcome++ ;
}
    else (userInput == 5 && Generatednumber== 5);{
       show =  5 ;
         compOutcome++ ;
    };
    return;
};
double Game::getRock(int show){
       Print_ = show;
    return Print_;

    }
double Game::getPaper(int show){
       Print_ = show;
     return Print_;

    }
double Game::getScissors(int show){
       Print_ = show;
              return Print_;

    }
double Game::getLizard(int show){
       Print_ = show;
              return Print_;

    }
double Game::getSpock(int show){
       Print_ = show;
       return Print_;
    }
void display(const char* Output, int Print_ ){
    if(Print_ ==1){
    Output ="Sock1" ;
    cout << Print_ << endl;
   
    }
    else if (Print_ ==2){
        Output = "Sock2";
            cout << Print_ << endl;

}
    else if (Print_ ==3){
        Output = "Sock3";
            cout << Print_ << endl;
      
}
    else if (Print_ ==4){
        Output = "Sock4" ;    
        cout << Print_ << endl;
}
    else(Print_ ==5);{
        Output ="Sock5";
        cout << Print_ << endl;
}
}    
                    //return private variable


int main(){
    
int Generatednumber = 0;
int userOutcome = 0;
int compOutcome = 0;
int numGames =0;
int userInput = 0;
const char* Output = 0  ;
int Print_ = 0;
int show = 0;

    cout << "You are about to play the game: Rock Paper Scissors Lizard Spock Game" << endl;
    cout << "The game is an expanison of the game rock papaer scissors, Pick between the options given and play against the computer" << endl;
    cout << "The way this works is: Scissors cuts Paper,  Paper covers Rock, Rock crushes Lizard,  Lizard poisons Spock, Spock smashes Scissors" << endl;
    cout << "Scissors decapitates Lizard, Lizard eats Paper, Paper disproves Spock, Spock vaporizes Rock, (and as it always has) Rock crushes Scissors" << endl; 
    cout << "How many games do you wish to play, choose out of 3, 5 or 7" << endl;
    cin >> numGames;
    

    if(numGames != 0 ){
        for(int a = 0; a < numGames; a++) {
            cout << "Choose what you want to play" << endl;
            cout << "Rock[1] Paper[2] Scissors[3] Lizard[4] Spock[5]" << endl;
            cin >> userInput;
            
            Game sum;
        switch(userInput){
            case 1:
                sum.setRock( userInput,  Generatednumber,  userOutcome,  compOutcome);
               break; 
            case 2:
                sum.setPaper( userInput,  Generatednumber,  userOutcome,  compOutcome);
               break; 
            case 3:
                sum.setScissors( userInput,  Generatednumber,  userOutcome,  compOutcome);
               break; 
            case 4:
                sum.setLizard( userInput,  Generatednumber,  userOutcome,  compOutcome);
               break; 
            case 5:
            int Print_ = 0;
                 sum.setSpock( userInput,  Generatednumber,  userOutcome,  compOutcome,  show);
                 sum.getSpock( show);
                 sum.display(Output, Print_ );
                  cout << "Generated number" << Generatednumber<<  endl;
                  cout << "userOutcome number" << userOutcome<<  endl;
                  cout << "compOutcome number" << compOutcome<<  endl;
                  cout << "show number" << show<<  endl;
                 cout << Print_ << endl;
               break; 
                       
                srand (time(NULL));
                Generatednumber = rand()%5+1; 
        }
        
    } 
    if(userOutcome < compOutcome){
        cout << "You lost" << endl;
        cout << "score: comp = " << compOutcome << endl;
        cout << "score: user = " << userOutcome << endl;

    }
    else if(userOutcome == compOutcome){
        cout << "Failed" << endl;
        cout << "score: comp = " << compOutcome << endl;
        cout << "score: user = " << userOutcome << endl;
    }
    else(userOutcome > compOutcome);{
        cout << "You won!" << endl;
        cout << "score: comp = " << compOutcome << endl;
        cout << "score: user = " << userOutcome << endl;
    }
 
    
return 0;    
}
}
