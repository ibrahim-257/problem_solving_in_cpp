#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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

string GenerateRandomLetters(short NumberOfLetters)
{
   string Key = "";

   for (int i = 0; i < NumberOfLetters; i++)
   {
    Key.push_back((char)RandomNumber('A', 'Z'));
   }
   return Key;
}

string GenerateKey(int KeyLength, short LettersPerSection)
{
    string Key = "";

    for(int i = 0; i < KeyLength; i++)
    {
        Key += GenerateRandomLetters(LettersPerSection);
        if((i != KeyLength - 1))
        Key.push_back('-');
    }
    return Key;
}

void FillArrayWithKeys(string arr[], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        arr[i] = GenerateKey(4,4);
    }
}

template <typename T>

void PrintArray(const T arrSource[], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        cout<< "Array["<<i<<"] : " << arrSource[i] <<endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    string arr[100];
    int arrLength = ReadPositiveNumber("Enter a Positive Number:");

    FillArrayWithKeys(arr, arrLength);

    cout<< "\nArray elements:\n\n";
    PrintArray(arr, arrLength);


    return 0;
}