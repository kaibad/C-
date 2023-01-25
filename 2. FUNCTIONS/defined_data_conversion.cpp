// c++ program to convert kg into g into g using user defined data conversion

#include <iostream>
using namespace std;

// Function to convert kilograms to grams
double kgToGrams(double kg)
{
    return kg * 1000;
}

int main()
{
    double kg;
    cout << "Enter the weight in kilograms: ";

    cin >> kg;
    double grams = kgToGrams(kg);
    cout << kg << " kilograms is equal to " << grams << " grams." << endl;
    return 0;
}
