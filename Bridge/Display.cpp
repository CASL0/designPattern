#include "Display.h"

void CDisplay::open(){
    pimpl->rawOpen();
}

void CDisplay::print(){
    pimpl->rawPrint();
}

void CDisplay::close(){
    pimpl->rawClose();
}

void CDisplay::display(){
    open();
    print();
    close();
}