#include <iostream>

using namespace std;

int main()
{
    int maxTay = 6;
    int nombreMyster = 45;

    for (int i = 0; i < maxTay; ++i)

    {
        std::cout << "Entrer un nombre entre 0 et 100 : ";
        int number = 0;

        std ::cin >> number;
        std ::cin.ignore();

        if (nombreMyster == number)
        {
            std::cout << "Gagné" << std::endl;
        }
        else if (number > nombreMyster)
        {
            std::cout << "Trop grand" << std::endl;
        }

        else
        {
            std::cout << "Trop petit" << std::endl;
        }

        if (i == maxTay - 1)
        {
            std::cout << "Pedu" << std::endl;
        }
    }

    std ::cin.ignore();

    return 0;
}