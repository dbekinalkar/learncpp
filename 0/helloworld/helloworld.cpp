#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << "\nC++ Version: " << __cplusplus;
    cout << endl;

    #ifdef DEBUG
        std::cout << "Debug mode is ON" << std::endl;
    #endif
}
