//
//  exam.h
//  midterm
//
//  Created by Tuba Eraslan on 8.04.2024.
//

#ifndef exam_h
#define exam_h

#include <iostream>
#include <string>
using namespace std;

class Exam {
private:
    string studentName;
    string studentSurname;
    int studentId;
    static int students[100];
    static int examResults[100][3];
    static bool resultAnnounced[3];
public:
    Exam(string,string,int);
    void setStudentName(string);
    void setStudentSurname(string);
    void setStudentId(int);
    void showResult(int);
    static void enterResult(int,int,int);
    
};

#endif /* exam_h */
