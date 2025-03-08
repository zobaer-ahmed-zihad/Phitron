#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

const string keywords[] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
const string operators[] = {"+", "-", "*", "/", "=", "==", "!=", "<", ">", "<=", ">="};
const char parentheses[] = {'(', ')', '{', '}'};
const char punctuation[] = {',', ';'};

bool isKeyword(const string& token) {
    for (const auto& keyword : keywords) {
        if (token == keyword) {
            return true;
        }
    }
    return false;
}

bool isOperator(const string& token) {
    for (const auto& op : operators) {
        if (token == op) {
            return true;
        }
    }
    return false;
}

bool isParenthesis(char token) {
    for (char p : parentheses) {
        if (token == p) {
            return true;
        }
    }
    return false;
}

bool isPunctuation(char token) {
    for (char p : punctuation) {
        if (token == p) {
            return true;
        }
    }
    return false;
}

bool isConstant(const string& token) {
    int dotCount = 0;
    size_t startIdx = 0;
    
    if (token[0] == '-' || token[0] == '+') {
        startIdx = 1;
    }
    
    for (size_t i = startIdx; i < token.size(); i++) {
        if (token[i] == '.') {
            dotCount++;
        } else if (!isdigit(token[i])) {
            return false;
        }
        
        if (dotCount > 1) {
            return false;
        }
    }
    
    return true;
}

bool isIdentifier(const string& token) {
    if (!isalpha(token[0]) && token[0] != '_') {
        return false;
    }
    
    for (size_t i = 1; i < token.size(); i++) {
        if (!isalnum(token[i]) && token[i] != '_') {
            return false;
        }
    }
    
    return true;
}

void classifyTokens(const string& input) {
    stringstream ss(input);
    string token;
    
    while (ss >> token) {
        if (isKeyword(token)) {
            cout << token << " : keyword token" << endl;
        }
        else if (isOperator(token)) {
            cout << token << " : operator token" << endl;
        }
        else if (token.length() == 1 && isParenthesis(token[0])) {
            cout << token << " : parenthesis token" << endl;
        }
        else if (token.length() == 1 && isPunctuation(token[0])) {
            cout << token << " : punctuation token" << endl;
        }
        else if (isConstant(token)) {
            if (token[0] == '-') {
                cout << token << " : negative constant token" << endl;
            } else {
                cout << token << " : positive constant token" << endl;
            }
        }
        else if (isIdentifier(token)) {
            cout << token << " : identifier token" << endl;
        }
        else {
            cout << token << " : invalid token" << endl;
        }
    }
}

int main() {
    string input;
    cout << "Write down your string: ";
    getline(cin, input);
    classifyTokens(input);
    return 0;
}