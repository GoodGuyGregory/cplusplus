#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Include inputfile stream object
    ifstream infile;

    // Opens input stream for reading purpose
    infile.open("file.txt");
    // additional flag modes include
    // ios::in -for reading default
    // ios::out - for writing to the file

    // File Must exist so there must be a try catch
    // if (!infile)
    // {
    //     cout << "File Cannot Be opened";
    // }

    // Checks wether the file is open
    // if (!infile.is_open())
    //     cout << "File cannot be opened";

    string str;
    int x;

    // infile extractor operators for the infile object
    infile >> str;
    infile >> x;

    cout << str << " " << x << endl;

    // Checking if we have reached the end of the file
    if (infile.eof())
        cout << "End of File reached";

    infile.close();
}