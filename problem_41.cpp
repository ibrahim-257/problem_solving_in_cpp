#include <iostream>
#include <string>
using namespace std;

void FillArray(int arr[], int &arrLength)
{
    arrLength = 6; 
    
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 20;
   
}

void PrintArray(const int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";  
    }
    cout << "\n";  
}

bool isPalindromeArray(const int arr[], int arrLength)
{ 
    for(int i = 0; i < arrLength; i++)
    {
        if(arr[i] != arr[arrLength - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[100];
    int arrLength;

    FillArray(arr, arrLength);

    cout<< "\nArray Elements:\n";
    PrintArray(arr, arrLength);

    if(isPalindromeArray(arr, arrLength))
        cout<< "\nYes array is palindrome\n";
    else
        cout<< "\nNo array is not palindrome\n";

    return 0;
}