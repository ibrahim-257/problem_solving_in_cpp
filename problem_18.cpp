#include <iostream>
#include <string>
using namespace std;

string RaedText(string Message)
{
    string Text = "";

    cout<< Message <<endl;
    getline (cin, Text);

    return Text;
}

void EncryptionText(string &Text , short EncryptionKey)
{
    for(int i = 0; i < Text.length(); i++)
    {
        Text[i] += EncryptionKey;
    }
}

void DecryptionText(string &Text, short EncryptionKey)
{
    for(int i = 0; i< Text.length(); i++)
    {
        Text[i] -= EncryptionKey;
    }
}

void PrintEncryptDecryptResult(string Text)
{
    cout<< "Text Before Encryption : "<< Text<<endl;
    EncryptionText(Text, 2);  
    cout<< "Text After Encryption : "<< Text <<endl;
    DecryptionText(Text, 2);
    cout<< "Text After Decryption : "<< Text <<endl;
}

int main()
{
    PrintEncryptDecryptResult(RaedText("Enter a Text:"));
    return 0;
}