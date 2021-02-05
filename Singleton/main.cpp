#include "Singleton.h"
#include "TicketMaker.h"

int main(void){
    std::cout << "チケットを発行しました：" << CTicketMaker::getNextTicket() << std::endl;
    std::cout << "チケットを発行しました：" << CTicketMaker::getNextTicket() << std::endl;
    return 0;
}