// cpp program to create integer array and write a function that will return the average value of array elements

#include <iostream>
using namespace std;

// Function to create a dynamic integer array and return its average value
double averageArray(int size)
{
    int *arr = new int[size]; // Create a dynamic integer array
    double sum = 0;
    cout << "Enter the elements:-";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = sum / size;
    return avg;
}

int main()
{
    int size;
    cout << "Enter the number of elements in the array;-";
    cin >> size;
    double avg = averageArray(size);
    cout << "The average value of the array is: " << avg << endl;
    return 0;
}
