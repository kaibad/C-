#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    char ch[100];
    file.open("exam.txt", ios::in | ios::app);
    if (!file)
    {
        cout << "unable to read the file." << endl;
    }
    else
    {
        file << "\n Iam a Bsc csit Student";

        file.close();
    }
}