#include "iostream"
#include "string.h"

using namespace std;
class Book
{
private:
    char title[30];
    char author[30];
    float cost;
    int accession_num;

public:
    // Method to read book details
    void readData()
    {
        cout << "Enter Book Title: ";
        gets(title);
        cout << "Enter Author Name: ";
        gets(author);
        cout << "Enter Accession Number: ";
        cin >> accession_num;
        cout << "Enter Cost: ";
        cin >> cost;
        cout << "---------------------------\n";
        // To clear the buffer for next gets() call
        char temp;
        cin.get(temp);
    }

    // Method to display book details
    void displayData()
    {
        cout << "\n--- Book Found ---";
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nAccession No: " << accession_num;
        cout << "\nCost: " << cost;
        cout << "\n------------------";
    }

    // Function to return title for comparison
    char *getTitle()
    {
        return title;
    }
};

int main()
{
    Book b[5]; // Array of objects
    char searchTitle[30];
    int found = 0;

    cout << "Enter Details for 5 Books:\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Book " << i + 1 << ":\n";
        b[i].readData();
    }

    cout << "\nEnter the Title of the book to search: ";
    gets(searchTitle);

    for (int i = 0; i < 5; i++)
    {
        // Comparing strings using strcmpi (case-insensitive)
        if (strcmpi(b[i].getTitle(), searchTitle) == 0)
        {
            b[i].displayData();
            found = 1;
            break;
        }
    }

    if (!found)
    {
        cout << "\nBook not found!";
    }
    return 0;
}