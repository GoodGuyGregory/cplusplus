#include <iostream>
#include <fstream>

using namespace std;

class Example
{
public:
    string Name;
    int Price;
    int Quanitity;

    // Override Operator methods for the input/output streams
    friend ofstream &operator<<(ofstream &ofs, Example &e);
    friend ifstream &operator>>(ifstream &ifs, Example &e);
};

ifstream &operator>>(ifstream &ifs, Example &e)
{
    ifs >> e.Name >> e.Price >> e.Quanitity;
    return ifs;
}

ofstream &operator<<(ofstream &ofs, Example &e)
{
    ofs << e.Name << endl;
    ofs << e.Price << endl;
    ofs << e.Quanitity << endl;
    return ofs;
}

int main()
{
    // Create Classes
    Example ex1;
    ex1.Name = "Example";
    ex1.Price = 000;
    ex1.Quanitity = 10;

    // Stores to Output File called Example.txt
    // ofstream ofs("Example.txt", ios::trunc);
    // Uses the output file operator for writting
    // ofs << ex1;
    // Closes IOstream
    // ofs.close();

    // Gets over contents from file as a class serialization
    // and display them from program as input
    ifstream ifs("Example.txt");

    ifs >> ex1;
    cout << "Name: " << ex1.Name << endl;
    cout << "Price: " << ex1.Price << endl;
    cout << "Quanitity: " << ex1.Quanitity << endl;

    return 0;
}