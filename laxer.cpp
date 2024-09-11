#include <iostream>
#include <string>
using namespace std;

string keywords[] = {"int", "float", "if", "else", "while", "return"};

char operators[] = {'+', '-', '*', '/', '='};

char punctuations[] = {';', ',', '(', ')', '{', '}'};

bool isKeyword(string word)
{
    for (int i = 0; i < 6; i++)
    {
        if (word == keywords[i])
        {
            return true;
        }
    }
    return false;
}

bool isOperator(char c)
{
    for (int i = 0; i < 5; i++)
    {
        if (c == operators[i])
        {
            return true;
        }
    }
    return false;
}

bool isPunctuation(char c)
{
    for (int i = 0; i < 6; i++)
    {
        if (c == punctuations[i])
        {
            return true;
        }
    }
    return false;
}

bool isLetter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

void tokenize(string code)
{
    int i = 0;
    int length = code.length();

    while (i < length)
    {

        if (code[i] == ' ')
        {
            i++;
            continue;
        }

        if (isLetter(code[i]))
        {
            string word = "";
            while (i < length && (isLetter(code[i]) || isDigit(code[i]) || code[i] == '_'))
            {
                word += code[i];
                i++;
            }
            if (isKeyword(word))
            {
                cout << "Keyword: " << word << endl;
            }
            else
            {
                cout << "Identifier: " << word << endl;
            }
        }

        else if (isDigit(code[i]))
        {
            string number = "";
            while (i < length && isDigit(code[i]))
            {
                number += code[i];
                i++;
            }
            cout << "Number: " << number << endl;
        }

        else if (isOperator(code[i]))
        {
            cout << "Operator: " << code[i] << endl;
            i++;
        }

        else if (isPunctuation(code[i]))
        {
            cout << "Punctuation: " << code[i] << endl;
            i++;
        }

        else
        {
            cout << "Unknown: " << code[i] << endl;
            i++;
        }
    }
}

int main()
{

    string code;
    getline(cin, code);

    tokenize(code);

    return 0;
}
