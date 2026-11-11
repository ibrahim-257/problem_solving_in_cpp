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

void FillArrayFrom1ToN(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i + 1;
    }
}

void Swap(int &A, int &B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

void ShuffleArray(int arr[], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        int randomIndex = RandomNumber(0, arrLength - 1);

        Swap(arr[i], arr[randomIndex]);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = ReadPositiveNumber("Please Enter a Positive Number:");

    FillArrayFrom1ToN(arr, arrLength);
    cout<< "\nArray elements before shuffle:\n";
    PrintArray(arr, arrLength);
    
    ShuffleArray(arr, arrLength);

    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr, arrLength);


    return 0;
}