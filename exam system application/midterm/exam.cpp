//
//  exam.cpp
//  midterm
//
//  Created by Tuba Eraslan on 8.04.2024.
//

#include <iostream>
#include <string>
#include "exam.h"
using namespace std;

Exam::Exam(string nameOfstudent,string surnameOfStudent,int idOfStudent){
    setStudentName(nameOfstudent);
    setStudentSurname(surnameOfStudent);
    setStudentId(idOfStudent);
}


void Exam::setStudentName(string nameOfStudent){
    studentName=nameOfStudent;
}


void Exam::setStudentSurname(string surnameOfStudent){
    studentSurname=surnameOfStudent;
}


void Exam::setStudentId(int idOfStudent){
    studentId=idOfStudent;
}


void Exam::showResult(int studentId) {
    if (studentId >= 1 && studentId <= 100) {
        cout << studentName << " " << studentSurname << " "<< "Student ID: " << studentId << " \n";
        for (int i = 0; i < 3; ++i) {
            cout << "Exam " << i + 1 << " result is: ";
            if (examResults[studentId-1][i]!=0) {
                cout << examResults[studentId - 1][i] << "\n";
            }
            else {
                cout << "The exam result was not announced" << "\n";
            }
        }
    }
    else {
        cout << "Invalid student ID" << "\n";
    }
}



 void Exam::enterResult(int studentId, int examNumber, int resultOfExam) {
    if (examNumber >= 1 && examNumber <= 3 && studentId >= 1 && studentId <= 100) {
        examResults[studentId - 1][examNumber - 1] = resultOfExam;
        cout << "The exam result was added successfully \n";
    }
    else {
        cout << "Invalid student ID or exam number" << "\n";
    }
}


int Exam::examResults[100][3] = {0};
bool Exam::resultAnnounced[3] = {false};
