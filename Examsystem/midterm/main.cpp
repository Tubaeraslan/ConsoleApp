//
//  main.cpp
//  midterm
//
//  Created by Tuba Eraslan on 8.04.2024.
//

#include <iostream>
#include <string>
#include "exam.h"
using namespace std;


int main(int argc, const char * argv[]) {
    int person;
    int sid;
    string sname, ssurname;
    int examName;
    int n;

    cout << "Are you a student(1) or teacher(2). Press 0 to exit the application: ";
    cin >> person;

    while (person != 0) {
        if (person == 1) {
            cout << "Enter your name: ";
            cin >> sname;
            cout << "Enter your surname: ";
            cin >> ssurname;
            cout << "Enter your id number: ";
            cin >> sid;
            Exam student(sname, ssurname, sid);
            student.showResult(sid);
        }
        else if (person == 2) {
            cout << "Enter the student's ID number: ";
            cin >> sid;
            cout << "Enter the exam number (1-2-3): ";
            cin >> examName;
            cout << "Enter the exam result: ";
            cin >> n;
            Exam::enterResult(sid, examName, n);
        }
        else {
            cout << "Invalid option" << endl;
        }

        
        cout << "Are you a student(1) or teacher(2). Press 0 to exit the application: ";
        cin >> person;
    }

    return 0;
}
