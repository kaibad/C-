#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("exam.txt", ios::out);
    if (!new_file)
    {
        cout << "file craetion failed.." << endl;
    }
    else
    {
        cout << "file is succesfully created" << endl;
        new_file << "Hi My Name ia KAILASH BADU";
        new_file.close();
    }
}