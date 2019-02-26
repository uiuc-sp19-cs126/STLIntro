#include "gradebook.h"

using std::string;

string StudentRecord::getName() const {
    return _name;
}

int StudentRecord::getScore() const {
    return _score;
}

void StudentRecord::setScore(int score) {
    _score = score;
}
void StudentRecord::setName(string name) {
    _name = name;
}
