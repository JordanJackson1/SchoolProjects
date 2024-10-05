// File Name: Course.h
//
// Author: Jill Seaman
// Date: 9/28/2024
// Assignment Number: 3
// CS2308 Fall 2024
// Instructor: Jill Seaman
//
// Specification for the Course Class to manage enrollment.

#include <string>
#include <iostream>
using namespace std;

class Course
{
    private:
        string courseID;        // Course code (i.e. CS2308)
        string courseName;      // Name of the course
        int maxStudents;        // Max number of students for course
        string* students;       // Students currently enrolled
        int numEnrolled;        // Current students enrolled

    public:
        Course();
        Course(string, string, int);
        Course(const Course& );
        ~Course();
        string getCourseInfo();
        bool enrollStudent(string);
        void displayStudents(ostream&);
        void increaseMaxEnrollment(int);
};
