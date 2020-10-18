#include <iostream>

using namespace std;

template <typename any>

void print(any out)
{
    cout << out << endl;
}

int main()
{
    int N;

    cout << "Enter n: ";
    cin >> N;

    if (N < 10)
    {
        cout << "1" << N << endl;
    }
    else if ((N % 2) != 1)
    {
        
    }

    return 0;
}