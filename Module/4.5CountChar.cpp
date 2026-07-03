#include "iostream"
#include "fstream"
#include "ctype.h" // For isspace()

using namespace std;
int main() {
    char filename[20], ch;
    int wordCount = 0;
    int inWord = 0; // Flag to track if we are inside a word

    cout << "Enter the filename to open: ";
    cin >> filename;

    ifstream fin(filename);

    if (!fin) {
        cout << "Error: File could not be opened!";
        cin.get();
        return 0;
    }

    while (fin.get(ch)) {
        // If the character is a space, newline, or tab
        if (isspace(ch)) {
            inWord = 0;
        } 
        // If we find a non-space character and we weren't already in a word
        else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    cout << "\nTotal number of words in the file: " << wordCount;

    fin.close();
    return 0;
}