#include <iostream>
#include <string>
#include <cctype> // for isdigit, isalpha
using namespace std;

// Function to check if a word is a keyword
bool isKeyword(const string &word)
{
    return word == "int" || word == "if" || word == "else" || word == "while" || word == "return";
}

// Function to check if a character is an operator
bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '=';
}

// Function to check if a character is punctuation
bool isPunctuation(char c)
{
    return c == ';' || c == ',' || c == '(' || c == ')' || c == '{' || c == '}';
}

// Function to tokenize the input string
void tokenize(const string &code)
{
    size_t length = code.length();
    size_t i = 0;

    while (i < length)
    {
        // Skip spaces
        if (isspace(code[i]))
        {
            i++;
            continue;
        }

        // Check for keywords or identifiers (letters or underscores)
        if (isalpha(code[i]) || code[i] == '_')
        {
            string word = "";
            while (i < length && (isalnum(code[i]) || code[i] == '_'))
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
        // Check for numbers
        else if (isdigit(code[i]))
        {
            string number = "";
            while (i < length && isdigit(code[i]))
            {
                number += code[i];
                i++;
            }
            cout << "Number: " << number << endl;
        }
        // Check for operators
        else if (isOperator(code[i]))
        {
            cout << "Operator: " << code[i] << endl;
            i++;
        }
        // Check for punctuations
        else if (isPunctuation(code[i]))
        {
            cout << "Punctuation: " << code[i] << endl;
            i++;
        }
        // Unknown characters
        else
        {
            cout << "Unknown: " << code[i] << endl;
            i++;
        }
    }
}

int main()
{
    // Sample code to tokenize
    string code;
    getline(cin, code);

    // Call the tokenize function
    tokenize(code);

    return 0;
}
