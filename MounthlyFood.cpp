#include <iostream>
int mounth = 1;
int food = 100;

int main()
{
    setlocale(LC_ALL, "Russian");
    for (food != 0; food -= 4; mounth++) {

        std::cout << "После " << mounth << " месяца у вас в запасе останется " << food << " кг гречки \n";
    }
    std::cout << "После " << mounth << " месяца гречка закончится \n";
}