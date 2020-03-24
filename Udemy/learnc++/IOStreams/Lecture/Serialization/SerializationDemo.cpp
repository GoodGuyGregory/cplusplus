#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    string name;
    int IDnum;
    string year;

    // Friend Functions for overriding the IOstream for file
    // Overrides the insertion operator for the object
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    // overrides the read function of a file for the student object
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};

ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.IDnum >> s.year;
    return ifs;
}

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.IDnum << endl;
    ofs << s.year << endl;
    return ofs;
}

int main()
{
    // Serialization is the process of storing and retrieving the state
    // of an object

    // Want to store this as an object in a file
    Student s1;
    s1.name = "Greg";
    s1.IDnum = 420;
    s1.year = "Senior";

    // ifstream ifs("Student.txt");
    ofstream ofs("Student.txt", ios::trunc);
    //  This would be easier if I can simply store the whole class?
    // this allows for the operator to be overloaded and from the friend function above

    // Uses the output file stream operator with the overriden function call
    ofs << s1;

    // ifs >> s1;
    // cout << "Name " << s1.name;
    // cout << "StudentID " << s1.IDnum;
    // cout << "Year: " << s1.year;

    ofs.close();
    return 0;
}