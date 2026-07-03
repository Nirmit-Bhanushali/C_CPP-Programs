#include "iostream"
#include "fstream"

using namespace std;
int main() {

    ofstream fout;
    ifstream fin;
    char ch;
    int n;

    // Write characters to file
    fout.open("chars.txt");
    if (!fout) {
        cout << "Error opening file for writing!";
        cin.get();
        return 0;
    }

    cout << "How many characters do you want to write? ";
    cin >> n;

    cout << "Enter " << n << " characters:\n";
    for (int i = 0; i < n; i++) {
        cin >> ch;
        fout.put(ch);     // write one character
    }

    fout.close();

    // Read characters one by one
    fin.open("chars.txt");
    if (!fin) {
        cout << "\nError opening file for reading!";
        cin.get();
        return 0;
    }

    cout << "\nCharacters stored in the file are:\n";

    while (fin.get(ch)) {   // read one character at a time
        cout << ch << " ";
    }

    fin.close();

    return 0;
}