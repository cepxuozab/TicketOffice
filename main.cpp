#include "src/TicketOffice.h"
#include <iostream>

using namespace std;

int main()
{
    TicketOffice tickets;

    tickets.PushTicket("Swan Lake"); // id - 0
    tickets.PushTicket("Swan Lake"); // id - 1
    tickets.PushTicket("Boris Godunov"); // id - 2
    tickets.PushTicket("Boris Godunov"); // id - 3
    tickets.PushTicket("Swan Lake"); // id - 4
    tickets.PushTicket("Boris Godunov"); // id - 5
    tickets.PushTicket("Boris Godunov"); // id - 6

    cout << tickets.GetAvailable() << endl; // �����: 7
    cout << tickets.GetAvailable("Swan Lake") << endl; // �����: 3
    cout << tickets.GetAvailable("Boris Godunov") << endl; // �����: 4

    // Invalidate ������ ������ � �������� 0, 1, 2:
    tickets.Invalidate(3);

    cout << tickets.GetAvailable() << endl; // �����: 4
    cout << tickets.GetAvailable("Swan Lake") << endl; // �����: 1
    cout << tickets.GetAvailable("Boris Godunov") << endl; // �����: 3

    tickets.PushTicket("Swan Lake"); // id - 7
    tickets.PushTicket("Swan Lake"); // id - 8

    cout << tickets.GetAvailable("Swan Lake") << endl; // �����: 3
}
