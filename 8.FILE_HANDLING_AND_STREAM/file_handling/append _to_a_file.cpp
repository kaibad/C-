#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    string text("\n\nMy name is kailash badu");
    string filename("kailash.txt");
    fstream file;

    file.open(filename, ios::app);
    if (!file.eof())
        file.write(text.data(), text.size());
    cout << "Done !" << endl;

    return EXIT_SUCCESS;
}