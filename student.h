#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& name, int rollNumber, double marks);

    // Getters
    std::string getName() const;
    int getRollNumber() const;
    double getMarks() const;

    // Setters
    void setName(const std::string& name);
    void setRollNumber(int rollNumber);
    void setMarks(double marks);

private:
    std::string name;
    int rollNumber;
    double marks;
};

#endif // STUDENT_H
