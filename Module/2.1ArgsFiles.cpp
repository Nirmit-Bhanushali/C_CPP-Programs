#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <process.h>
#include <string.h>

using namespace std;
int main(int argc, char *argv[])
{
    int a = argc;
    int x;
    char dest[5];
    strcpy(dest, argv[1]);
    cout << "Dest=" << dest << endl;

    switch (dest[0])
    {
    case 'f':
        system("dir");
        break;
    case 'c':
        system("dir *.cpp");
        break;
    case 'd':
        system("del matrix.exe");
        break;

    case 'h':
        cout << "\nUse f for listing all files" << endl;
        cout << "for example maind f" << endl;
        cout << "Use c for listing only cpp file" << endl;
        cout << "for example maind c" << endl;
        cout << "use h for help" << endl;
        cout << "for exampe maind h" << endl;
        break;

    default:
        cout << "\n Wrong option!!";
        break;
        }
    return 0;
}