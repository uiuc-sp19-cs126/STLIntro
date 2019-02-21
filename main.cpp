#include "main.h"
#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    GradebookType gradebook;

    while(true) {
    cout << "What command professor plum? ";
    string command;
    // Get Input
    cin >> command;

        if( command == "quit"){
            return 0;
        } else if( command == "print") {
            printGrades(gradebook);
        } else if( command == "add") {
            addGrade(gradebook);
        } else {
            cout << "\n I don't know how to " << command << " professor." << endl;
        }
    }
    return 0;
}

void addGrade(GradebookType &gradebook) {
    cout << "Teach me to add a grade" << endl;
}

void printGrades(const GradebookType &gradebook) {
    cout << "Teach me to print the grades" << endl;
}