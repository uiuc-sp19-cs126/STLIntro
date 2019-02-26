#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
#include <map>

class StudentRecord {
    std::string _name;
    int _score;
public:
    std::string getName() const;
    int getScore() const;
    void setScore(int score);
    void setName(std::string name);
};

using GradebookType = std::map<std::string,StudentRecord>;

#endif