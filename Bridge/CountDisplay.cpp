#include "CountDisplay.h"

void CCountDisplay::multiDisplay(int times){
    open();
    for (int i = 0; i < times;i++){
        print();
    }
    close();
}