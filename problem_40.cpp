#include <iostream>
using namespace std;

void FillArray(int arr[], int &arrLength)
{
    arrLength = 10; 
    
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(const int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";  
    }
    cout << "\n";  
}

short FindNumberPositionInArray(int Number, const int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;  
    }
    return -1;
}

bool IsNumberInArray(int Number, const int arr[], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[], int &arrLength)
{
    arr[arrLength++] = Number; 
}

void CopyDistinctNumbersToArray(const int arrSource[], int arrDestination[], int SourceLength, int &DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}

int main()
{
    int arrSource[100];
    int SourceLength = 0;
    
    int arrDestination[100];
    int DestinationLength = 0;

    FillArray(arrSource, SourceLength);

    cout << "\nArray 1 elements (Source):\n";
    PrintArray(arrSource, SourceLength);

    CopyDistinctNumbersToArray(arrSource, arrDestination, SourceLength, DestinationLength);

    cout << "\nArray 2 distinct elements (Destination):\n";
    PrintArray(arrDestination, DestinationLength);

    return 0;
}