#include <iostream>
using namespace std;

class Student
{
public:
    int studentID;
    string studentName;
    int score1;
    int score2;
    int score3;

    Student(int studentid, string name, int test1, int test2, int test3)
    {
        studentID = studentid;
        studentName = name;
        score1 = test1;
        score2 = test2;
        score3 = test3;
    }

    int totalPoints()
    {
        return score1 + score2 + score3;
    }

    char Grade()
    {
        int sum, average;
        sum = score1 + score2 + score3;
        average = sum / 3;
        if (average > 90)
            return 'A';
        else if (average < 90 && average > 80)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int id, test1, test2, test3;
    string name;

    cout << "Enter Student ID: " << endl;
    cin >> id;
    cout << "Enter Student Name: " << endl;
    cin >> name;
    cout << "Enter 3 Test Scores: " << endl;
    cin >> test1 >> test2 >> test3;
    Student student(id, name, test1, test2, test3);
    cout << "Score Total: " << student.totalPoints() << endl;
    cout << "Student's Average: " << student.Grade() << endl;

    return 0;
}