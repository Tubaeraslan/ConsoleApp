//
//  main.cpp
//  mazegame2
//
//  Created by Tuba Eraslan on 14.01.2024.
//

#include <iostream>
using namespace std;


void printMaze(int colsOfMaze,int rowsOfMaze,char newMaze[10][10]){

    for (int i = 0; i < 10; ++i) {
           for (int j = 0; j < 10; ++j) {
               cout << newMaze[i][j] << ' ';
               }
        cout << "\n";
           }
       }



void win (int colsWin,int rowsWin,char winMaze[10][10]){
    if (colsWin==9 && rowsWin ==5) {
        winMaze[9][5]='S';
        cout << "------CONGRATULATİONS----- \n -----YOU WİN----- \n";
    }
}


int main(int argc, const char * argv[]) {
    
    const int rows = 10;
    const int cols = 10;
    int colsOfUser=0;
    int rowOfUser=4;
    char user;
        char maze[cols][rows] = {
            {'-', '-', '-', '-', 'S', '-', '-', '-', '-', '-'},
            {'|', '|', '-', '|', '.', '|', '-', '-', '|', '|'},
            {'|', '|', '.', '.', '.', '.', '.', '.', '.', '|'},
            {'|', '-', '-', '|', '-', '|', '-', '-', '.', '|'},
            {'|', '|', '.', '|', '.', '|', '.', '.', '.', '|'},
            {'|', '.', '.', '.', '.', '.', '.', '.', '-', '|'},
            {'|', '-', '-', '.', '-', '|', '.', '.', '.', '|'},
            {'|', '|', '.', '.', '.', '|', '-', '-', '.', '|'},
            {'|', '-', '-', '|', '.', '.', '.', '|', '.', '|'},
            {'-', '-', '-', '-', '-', 'F', '-', '-', '-', '-'}
        };
    
    printMaze(cols, rows, maze);
    
    cout << "You should star with the S letter and your final exit is F letter \n";
    cout << "You can use the only ways of  . \n";
    cout << "You cannot use the wall of maze  |  or   -  \n";
    cout << "If you can reach the exit you win the game. \n";
    
    do {
        cout << "You should enter: \n R-->RİGHT \n L-->LEFT \n U-->UP \n D-->DOWN : ";
        cin >> user;
        
    if (user=='R' || user=='r') {
        rowOfUser=rowOfUser+1;
        if (maze[colsOfUser][rowOfUser]=='.') {
            maze[colsOfUser][rowOfUser]='S';
            maze[colsOfUser][rowOfUser-1] = '.';
            printMaze(colsOfUser, rowOfUser, maze);
        }
        else if (maze[colsOfUser][rowOfUser]=='F'){
            win(colsOfUser, rowOfUser, maze);
        }
        else{
            cout << "Ops... You hit the wall of the maze ";
            rowOfUser=rowOfUser-1;
        }
    }
    else if (user=='L' || user=='l') {
        rowOfUser=rowOfUser-1;
        if (maze[colsOfUser][rowOfUser]=='.') {
            maze[colsOfUser][rowOfUser]='S';
            maze[colsOfUser][rowOfUser+1] = '.';
            printMaze(colsOfUser, rowOfUser, maze);
        }
        else if (maze[colsOfUser][rowOfUser]=='F'){
            win(colsOfUser, rowOfUser, maze);
        }
        else{
            cout << "Ops... You hit the wall of the maze ";
            rowOfUser=rowOfUser+1;
        }
    }
    else if (user=='U' || user=='u') {
        colsOfUser=colsOfUser-1;
        if (maze[colsOfUser][rowOfUser]=='.') {
            maze[colsOfUser][rowOfUser]='S';
            maze[colsOfUser+1][rowOfUser] = '.';
            printMaze(colsOfUser, rowOfUser, maze);
        }
        else if (maze[colsOfUser][rowOfUser]=='F'){
            win(colsOfUser, rowOfUser, maze);
        }
        else{
            cout << "Ops... You hit the wall of the maze ";
            colsOfUser=colsOfUser+1;
        }
    }
    else if (user=='D' || user=='d') {
        colsOfUser=colsOfUser+1;
        if (maze[colsOfUser][rowOfUser]=='.') {
            maze[colsOfUser][rowOfUser]='S';
            maze[colsOfUser-1][rowOfUser] = '.';
            printMaze(colsOfUser, rowOfUser, maze);
        }
        else if (maze[colsOfUser][rowOfUser]=='F'){
            win(colsOfUser, rowOfUser, maze);
        }
        else{
            cout << "Ops... You hit the wall of the maze ";
            colsOfUser=colsOfUser-1;
        }
    }
    else{
        cout << "INVALID LETTER ";
    }
        
    } while (maze[9][5]!='S');
    return 0;
}
