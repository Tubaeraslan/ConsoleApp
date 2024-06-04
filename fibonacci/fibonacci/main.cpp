//
//  main.cpp
//  fibonacci
//
//  Created by Tuba Eraslan on 4.06.2024.
//

#include <iostream>
using namespace std;

class Fibonacci {
public:
    Fibonacci(int num){
        setNumber(num);
    }
    void setNumber(int num){
        number=num;
    }
    int getNumber(){
        return number;
    }
    void calculateAndDisplay(){
        int arr[number];
        int t1=0;
        int t2=1;
        int nextTerm=0;
        for (int i=0; i<number; i++) {
            if (i==0) {
                arr[i]=t1;
                continue;
            }
            if (i==1) {
                arr[i]=t2;
                continue;
            }
            nextTerm=t1+t2;
            t1=t2;
            t2=nextTerm;
            arr[i]=nextTerm;
        }
        
        cout << "The first " << getNumber() << " number of fibonacci : \n";
        for (int i=0; i<number; i++) {
            cout << arr[i] <<" ";
        }
    }
private:
    int number;
};

int main(int argc, const char * argv[]) {
    
    Fibonacci myList(14);
    myList.calculateAndDisplay();
    
    return 0;
}
