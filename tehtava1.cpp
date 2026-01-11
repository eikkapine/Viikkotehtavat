#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    int etsittava;
    int arvaus;
    int arvaustenMaara = 0;

    srand(time(nullptr));
    etsittava = rand() % maxnum + 1;

    while (true)
    {
        cout << "Arvaa luku (1-" << maxnum << "): ";
        cin >> arvaus;
        arvaustenMaara++;

        if (arvaus < etsittava)
        {
            cout << "Liian pieni!" << endl;
        }
        else if (arvaus > etsittava)
        {
            cout << "Liian suuri!" << endl;
        }
        else
        {
            cout << "Oikein!" << endl;
            break;
        }
    }

    return arvaustenMaara;
}

int main()
{
    int yritykset = game(40);

    cout << endl;
    cout << "Arvausten maara: " << yritykset << endl;
    cout << "Paina Enter lopettaaksesi...";

    cin.ignore();
    cin.get();

    return 0;
}
