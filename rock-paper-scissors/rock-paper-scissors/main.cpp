//
//  main.cpp
//  rock-paper-scissors
//
//  Created by Tuba Eraslan on 6.06.2024.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class RockPaperScissors {
public:
    RockPaperScissors(string name){
        setUserName(name);
        srand(time(0));
        computerChoice= rand()%3 +1;
    }
    void setUserName(string name){
        userName=name;
    }
    string getUserName(){
        return userName;
    }
    void getUserChoice(){
        cout << "1-Rock \n 2- Paper \n 3- Scissors \n Push 1-2-3 \n";
        cin >> userChoice;
        cout << "Computer choice : " << computerChoice << "\n";
        determineWinner();
    }
    void determineWinner(){
        if (userChoice == computerChoice) {
            cout << "Scoreless \n" ;
        }
        else if ((userChoice==1 && computerChoice==3) || (userChoice==2 && computerChoice==1) || (userChoice==3 && computerChoice==2)){
            cout << getUserName() << " wins \n ";
        }
        else{
            cout << "Computer wins \n";
        }
        
    }
private:
    int userChoice;
    int computerChoice;
    string userName;
};


int main() {
    string name;
    
    cout << "Enter the player name: ";
    cin >> name;
    
    RockPaperScissors first(name);
    first.getUserChoice();
    

    return 0;
}
