//Complete this file with the other member function definitions and your documentation

// when this function is called, pass cout to it: class.displayStudents(cout)
void Course::displayStudents(ostream &out)
{
    cout << "Students enrolled in " << (courseID + ":" + courseName) << endl;

    for (int i = 0; i < numEnrolled; i++) 
    {
        out << "-" << students[i] << endl;
    }
}
