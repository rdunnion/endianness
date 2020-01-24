// this program shows you what endian type your system is

#include <cstdlib> 
#include <iostream>
using namespace std;
int main()
{
    unsigned int i = 1;
    char* c = (char*)&i;
    if (*c)
        cout << "Little endian";
    else
        cout << "Big endian";
    return 0;
}

// This code is contributed by rathbhupendra 