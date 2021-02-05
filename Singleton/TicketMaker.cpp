#include "TicketMaker.h"

int CTicketMaker::getNextTicket(){
    static int ticket = 1000;
    return ticket++;
}