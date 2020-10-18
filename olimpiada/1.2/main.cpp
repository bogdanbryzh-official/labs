#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int groups;
    cout << "Enter number of groups: ";
    cin >> groups;

    int groups_people[groups];

    cout << "Enter amount of people in groups: \n";

    for(int i = 0; i < groups; i++)
    {
        int amount;
        cin >> amount;

        if (amount % 2 != 1)
        {
            cout << "You should enter only odd numbers\n";
            return 1;
        } else {
            
        }
        
    }

    return 0;
}