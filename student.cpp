#include "student.h"

Student::Student(const std::string& name, int rollNumber, double marks)
    : name(name), rollNumber(rollNumber), marks(marks) {}

std::string Student::getName() const {
    return name;
}

int Student::getRollNumber() const {
    return rollNumber;
}

double Student::getMarks() const {
    return marks;
}

void Student::setName(const std::string& newName) {
    name = newName;
}

void Student::setRollNumber(int newRollNumber) {
    rollNumber = newRollNumber;
}

void Student::setMarks(double newMarks) {
    marks = newMarks;
}
