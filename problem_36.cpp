#include <iostream>
#include <limits>
using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    while (true)
    {
        cout<< Message << " ";
        cin >> Number;

        if(cin.fail())
        {
            cin.clear();


            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid Input! Please enter a valid integer number.\n\n";
        }
        else
        {
            return Number;
        }
    }
}

short ReadOneOrZero(string messages)
{
    short number = 0;
    do
    {
        cout << messages << " ";
        cin>> number;
    } while (number != 0 && number != 1);

    return number;
}

void AddArrayElement(int Number, int arr[], int &arrLength)
{
    arr[arrLength++] = Number;
}

void FillArrayByUser(int arr[], int &arrLength)
{
    int Number = 0;
    short AddMore = 0;
    do
    {
        Number = ReadNumber("Please enter a number ?");
       
        AddArrayElement(Number, arr, arrLength);
       
        AddMore  = ReadOneOrZero("Do you want to add more number? [0]:No,[1]:yes?");
        cout<< "\n";
    } while (AddMore == 1);
}

void PrintArray(const int arr[], int arrLength)
{
    cout<< "\nArray Length: " << arrLength << endl;
    cout<< "Array elements: ";
    for(int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];
    int arrLength = 0;

    FillArrayByUser(arr, arrLength);
  

    PrintArray(arr, arrLength);

    return 0;
}