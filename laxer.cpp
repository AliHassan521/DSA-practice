#include <iostream>
#include <string>
using namespace std;

string keywords[] = {"int", "float", "if", "else", "while", "return"};

char operators[] = {'+', '-', '*', '/', '=', '<', '>', '!'};

char punctuations[] = {
    ';',
    ',',
    '(',
    ')',
    '{',
    '}',
};

bool isKeyword(const string &word)
{
    for (const string &keyword : keywords)
    {
        if (word == keyword)
        {
            return true;
        }
    }
    return false;
}

bool isOperator(char c)
{
    for (char op : operators)
    {
        if (c == op)
        {
            return true;
        }
    }
    return false;
}

bool isPunctuation(char c)
{
    for (char p : punctuations)
    {
        if (c == p)
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

void tokenize(const string &code)
{
    int i = 0;
    int length = code.length();

    while (i < length)
    {
        // Skip spaces
        if (code[i] == ' ')
        {
            i++;
            continue;
        }

        if (isLetter(code[i]) || code[i] == '_')
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
            bool hasDecimalPoint = false;
            while (i < length && (isDigit(code[i]) || code[i] == '.'))
            {
                if (code[i] == '.')
                {
                    if (hasDecimalPoint)
                    {
                        cout << "Invalid Number: " << number << code[i] << endl;
                        number += code[i];
                        i++;
                        break;
                    }
                    hasDecimalPoint = true;
                }
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

        else if (isDigit(code[i]))
        {
            string invalidIdentifier = "";
            while (i < length && (isDigit(code[i]) || isLetter(code[i]) || code[i] == '_'))
            {
                invalidIdentifier += code[i];
                i++;
            }
            cout << "Invalid Identifier: " << invalidIdentifier << endl;
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
