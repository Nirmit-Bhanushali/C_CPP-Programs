#include "iostream"
#include "fstream"

using namespace std;
int main() {

    char sourceFile[30], targetFile[30], ch;

    cout << "Enter the name of the source file (e.g., DATA.TXT): ";
    cin >> sourceFile;
    cout << "Enter the name of the target file: ";
    cin >> targetFile;

    // Open source file for reading
    ifstream fin(sourceFile);
    if (!fin) {
        cout << "Error: Source file not found!";
        cin.get();
        exit(1);
    }

    // Open target file for writing
    ofstream fout(targetFile);
    if (!fout) {
        cout << "Error: Could not create target file!";
        fin.close();
        cin.get();
        exit(1);
    }

    // Copying character by character
    while (fin.get(ch)) {
        fout.put(ch);
    }

    cout << "\nFile contents copied successfully.";

    fin.close();
    fout.close();
    return 0;
}