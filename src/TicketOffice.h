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

    // �������� ���������� ��������� �������
    int GetAvailable() const;

    // �������� ���������� ��������� ������� ������������ ����
    int GetAvailable(const std::string& name) const;

    // �������� ������ ������ (�� ������������ id)
    void Invalidate(int minimum);

private:
    int last_id_ = 0;
    std::deque<Ticket> tickets_;
};
