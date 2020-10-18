#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Entered " << argc << " numbers\n";

    for (int i = 1; i < argc; i++)
    {
        int x = atoi(argv[i]);
        cout << sqrt(x) << endl;
    }

    return 0;
}