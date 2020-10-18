#include <iostream>

using namespace std;

void menu(int task)
{
    switch (task)
    {
    case 1:
        cout << "hello from 1" << endl;
        break;

    case 2:
        cout << "hello from 2" << endl;
        break;

    case 3:
        cout << "hello from 3" << endl;
        break;

    default:
        break;
    }

    menu(0);
}

int main()
{
    int task;
    cout << "Choose task: ";
    cin >> task;

    menu(task);
}