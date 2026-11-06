#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
   int Number = 0;
   do
   {
    cout << message << endl;
    cin >> Number;
   } while (Number <= 0);

   return Number;
}

void FillArrayByUser(int array[], int arrlength)
{
    cout << "Enter array elements:\n";
    for (int i = 0; i < arrlength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin>> array[i];
    }

    cout << '\n';
}

int RepeatedNumberINarray(int arr[], int arrLength, int Number)
{
    int Counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if(arr[i] == Number)
        Counter++;
    }
    return Counter;
}

void Printarray(int arr[], int arrlength)
{
    cout << "\nOriginal array: ";
    for(int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< '\n';
}

void PrintResultArray(int arr[], int arrlength, int NumberToCheck)
{
    Printarray(arr, arrlength);
    cout << NumberToCheck << " is repeated " << RepeatedNumberINarray(arr, arrlength, NumberToCheck) << " time(s).\n";
}

int main()
{
    
    int arrayLength = ReadPositiveNumber("Please enter a positive number:");
    int userArray[100];

    FillArrayByUser(userArray, arrayLength);

    int checknum = ReadPositiveNumber("Enter the number you want to check: ");

    PrintResultArray(userArray, arrayLength, checknum);
    return 0;
}