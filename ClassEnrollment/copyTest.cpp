// File Name: copyTest.cpp
//
// Author: Jill Seaman
// Date: 9/28/2024
// Assignment Number: 3
// CS2308 Fall 2024
// Instructor: Jill Seaman
//
// This driver tests the behavior of the Course class copy constructor.

#include <iostream>
using namespace std;

#include "Course.h"


int main()
{
    //Creating the course
    string courseName;
    string courseID;
    int classSize;
    Course classRoster("CS101", "Intro", 25);
    
    //add students
    classRoster.enrollStudent("jamie");
    classRoster.enrollStudent("jethro");
    classRoster.enrollStudent("jasper");
    classRoster.enrollStudent("jaya");

    Course copyClass(classRoster);
    copyClass.enrollStudent("sunny");
    classRoster.enrollStudent("shelby");
    
    cout << classRoster.getCourseInfo();
    classRoster.displayStudents();
    cout << "*******" << endl;
    cout << copyClass.getCourseInfo();
    copyClass.displayStudents();
    
}
/*
 Expected output:
 CS101:Intro
 Capacity: 25
 Enrollment: 5
 Students enrolled in CS101:Intro
 -jamie
 -jethro
 -jasper
 -jaya
 -shelby
 *******
 CS101:Intro
 Capacity: 25
 Enrollment: 5
 Students enrolled in CS101:Intro
 -jamie
 -jethro
 -jasper
 -jaya
 -sunny
*/
