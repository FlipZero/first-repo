//adding new class item
#include <iostream>
#include <conio.h> 
#include "Item.h"

int main()
{
    while (true) {
        Item* pItem = new Item;
        int choise;
        std::cout << "What do you what\n[1] Show all items [2] Add new item [3] Remove item: ";
        std::cin >> choise;
        switch (choise) {
        case 1:
            pItem->show_item();
            _getch();
            break;
        case 2:

            break;
        case 3:

            break;
        default:
            system("CLS");
            return true;
            break;
        }
        system("CLS");
    }
    return 0;
 }


//Window working program
/*
#include <iostream>
#include "Window.h"

int main()
{
    std::cout << "Creating Window\n";

    Window* pWindow = new Window();

    bool running = true;
    while (running)
    {
        if (!pWindow->ProcessMessages())
        {
            std::cout << "Closing Window\n";
            running = false;
        }

        Sleep(10);
    }

    delete pWindow;
    
    return 0;
}
*/


//prosty kalkulator
/*
#include <iostream>

int main()
{
    int a, b, dzialanie;
    std::cout << "KALKULATOR" << std::endl;
    std::cout << "Podaj liczbe calkowita a:";
    std::cin >> a;
   
    std::cout << "Podaj liczbe calkowita b:";
    std::cin >> b;
   
    std::cout << "Wybierz dzialanie: [1] Dodawanie, [2] Odejmowanie, [3] Mnozenie, [4] Dzielenie:" << std::endl;
    std::cin >> dzialanie;
   
    switch( dzialanie )
    {
    case 1:
        std::cout << "a+b = " << a + b;
        break;
    case 2:
        std::cout << "a-b = " << a - b;
        break;
    case 3:
        std::cout << "a*b = " << a * b;
        break;
    case 4:
        if( b == 0 )
        {
            std::cout << "Nie mozna podzielic przez 0";
            return( 0 );
        }
        std::cout << "a/b = " << a / b;
        break;
        default:
        std::cout << "Zegnaj!";
        break;
    }
    return 0;
}
*/