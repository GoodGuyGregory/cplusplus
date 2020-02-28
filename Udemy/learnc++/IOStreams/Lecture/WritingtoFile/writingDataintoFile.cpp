#include <fstream>

int main()
{
    // output filestream with file name inside outfile.
    // if the file doesnt exist it will create it.
    // if the file is there the contents will be removed from the file
    std::ofstream outfile("My.txt", ios::trunc);

    // if you want to read in the contents and append new contents
    // ios::app - appending to the file
    // ios::trunc - truncation of the file contents default action
    // fstream outfile("My.txt", ios::app);

    // Writes hello inside of the file
    outfile << "Hello" << std::endl;

    outfile << "Special Numbers" << std::endl;

    outfile << 420 << std::endl;
    outfile << 7 << std::endl;
    outfile << 69 << std::endl;
    outfile << 23 << std::endl;

    // Must close the iostream with the close command
    // Must close the stream so that the file can be
    // released for other programs to access the resource
    outfile.close();

    return 0;
}