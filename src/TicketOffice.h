#pragma once
#include <algorithm>
#include <deque>
#include <string>

struct Ticket {
    int id;
    std::string name;
};

class TicketOffice {
public:
    void PushTicket(const std::string& name);

    // получить количество доступных билетов
    int GetAvailable() const;

    // получить количество доступных билетов определённого типа
    int GetAvailable(const std::string& name) const;

    // отозвать старые билеты (до определённого id)
    void Invalidate(int minimum);

private:
    int last_id_ = 0;
    std::deque<Ticket> tickets_;
};
