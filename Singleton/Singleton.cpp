#include "Singleton.h"

CSingleton &CSingleton::getInstance(){
    static CSingleton instance;
    return instance;
}