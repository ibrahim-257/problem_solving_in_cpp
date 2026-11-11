#include <iostream>
#include <ctime>
#include <cstdlib>
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

int RandomNumber(int from, int to)
{
    int ranNum = rand() % (to - from + 1) + from;
    return ranNum;
}

void PrintArray(const int arr[], int arrlength)
{
    for(int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< '\n';
}
void FillArrayWithRandomNumbers(int arr[], int arrlength, int from, int to)
{
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = RandomNumber(from, to);
    }
}

short FindNumberPositionInArray(const int arr[], int arrLength, int NumberToSearch)
{
    for(int i = 0; i < arrLength; i++)
    {
        if(arr[i] == NumberToSearch)
            return i;
    }
    return -1;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("How many elements do you want to fill?");

    FillArrayWithRandomNumbers(arr, arrLength, 1, 100);

    cout << "\nArray 1 Elements:\n";
    PrintArray(arr, arrLength);

    int Number = ReadPositiveNumber("\nPlease Enter a Number to search for?");
    cout << "\nNumber you are looking for is: " << Number << endl;

    short NumberPosition = FindNumberPositionInArray(arr, arrLength, Number);

    if(NumberPosition == -1)
    {
        cout << "The number is not found :-(\n";
    }
    else
    {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The number found its order  : " << NumberPosition + 1 << endl;
    }

    return 0;
}