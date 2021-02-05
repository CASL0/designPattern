#include "Singleton.h"

int main(void){
    std::cout << "Start." << std::endl;
    CSingleton &obj1 = CSingleton::getInstance();
    CSingleton &obj2 = CSingleton::getInstance();
    if(&obj1 == &obj2){
        std::cout << "obj1とobj2は同じインスタンスです。" << std::endl;
    }
    std::cout << "End." << std::endl;
    return 0;
}