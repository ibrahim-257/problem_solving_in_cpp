#include <iostream>
#include <string>
using namespace std;

bool isCapitalLetter(char c)
{
    return (c >= 'A' && c <= 'Z');
}

bool isAllLettersInWordCapital(string Word)
{
    for(int i = 0; i < Word.length(); i++)
    {
        if(!isCapitalLetter(Word[i]))
            return false;
    }
    return true;
}

bool isWordThreeCapitalLetters(string Word)
{
        return (Word.length() == 3);
}

string ReadThreeLettersWord(string Message)
{
    string Word = "";

    do
    {
        cout<< Message <<endl;
        cin>>Word;
    } while (!isWordThreeCapitalLetters(Word) || !isAllLettersInWordCapital(Word));
    
    return Word;
}

void PrintThreeLetterPassword(string Password)
{
    
    int TrialCount = 0;
    for(char i = 'A'; i<= 'Z'; i++)
    {
        for(char j = 'A'; j<= 'Z'; j++)
        {
            for(char k = 'A'; k <= 'Z'; k++)
            {
                string TrailWord = {i, j, k};
                TrialCount++;
                cout<< "Trial [" << TrialCount << "]: "<< TrailWord <<endl;
                if(TrailWord == Password)
                {
                    cout<< "\n\n\n"
                    << "Password is "<< TrailWord <<endl
                    << "Found after "<< TrialCount << " Trail(s)"<<endl;
                    return;
                }
            }
        }
        
    }
}

int main()
{
   
   PrintThreeLetterPassword(ReadThreeLettersWord("Please Enter a Password:"));
  

    return 0;
}