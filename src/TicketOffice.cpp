#include "TicketOffice.h"

void TicketOffice::PushTicket(const std::string& name)
{
    tickets_.push_back({ last_id_++, name });
}

int TicketOffice::GetAvailable() const
{
    return static_cast<int>(tickets_.size());
}

int TicketOffice::GetAvailable(const std::string& name) const
{
    return std::count_if(tickets_.begin(), tickets_.end(), [&name](const Ticket& ticket) {
        return ticket.name == name;
    });
}

void TicketOffice::Invalidate(int minimum)
{
    while (!tickets_.empty() && tickets_.front().id < minimum) {
        tickets_.pop_front();
    }
}
