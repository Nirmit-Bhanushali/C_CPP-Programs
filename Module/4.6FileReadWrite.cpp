#include "iostream"
#include "fstream"

using namespace std;
int main()
{
    ofstream ofs1("even.txt");
    ofstream ofs2("odd.txt");

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            ofs1 << i << endl;
        }
        else
        {
            ofs2 << i << endl;
        }
    }
    cout << "The content is written to the file" << endl;

    ofs1.close();
    ofs2.close();

    ifstream ifs1("even.txt");

    cout << endl;

    int num;
    cout << "the content of even file is" << endl;
    while (!ifs1.eof())
    {
        ifs1 >> num;
        cout << num << endl;
    }
    ifs1.close();

    ifstream ifs2("odd.txt");

    cout << "The content of odd file is" << endl;
    // int num;
    while (!ifs2.eof())
    {
        ifs2 >> num;
        cout << num << endl;
    }
    ifs2.close();
    return 0;
}