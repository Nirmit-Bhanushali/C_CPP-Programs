#include "iostream"
#include "string.h"

using namespace std;
class Connect
{
private:
    char str[30];

public:
    Connect(char *s)
    {
        strcpy(str, s);
    }

    void operator+(Connect obj)
    {
        strcat(str, obj.str);
        cout << "The concatenation string=" << str;
    }
};

int main()
{
    Connect obj1("Amity");
    Connect obj2("University");
    obj1 + obj2;
    return 0;
}