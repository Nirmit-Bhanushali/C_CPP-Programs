// 5.4 WAP to read data from keyboard & write it to the file. After writing is completed, the file is closed. The program again opens the same file and reads it.
// 5.4ReadWrite.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;

    // Create and open file for writing
    ofstream fout("sample.txt");

    cout << "Enter data to write into file: ";
    getline(cin, data);

    // Write data into file
    fout << data;

    // Close file after writing
    fout.close();

    cout << "\nData written to file successfully." << endl;

    // Open same file for reading
    ifstream fin("sample.txt");

    cout << "\nReading data from file:" << endl;

    // Read data from file
    getline(fin, data);

    cout << data << endl;

    // Close file after reading
    fin.close();

    return 0;
}