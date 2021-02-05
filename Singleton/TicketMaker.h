#pragma once
class CTicketMaker{
private:
    CTicketMaker(){};
    ~CTicketMaker(){};
    CTicketMaker(const CTicketMaker &);
    const CTicketMaker &operator=(const CTicketMaker &);
public:
    static int getNextTicket();
};