#ifndef MAIN_H
#define MAIN_H
#include <map>
#include <string>

using GradebookType = std::map<std::string,int>;

void printGrades(const GradebookType &gradebook);

void addGrade(GradebookType &gradebook);

#endif
