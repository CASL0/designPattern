#include "Director.h"

void CDirector::construct(){
    m_pBuilder->makeTitle("Greeting");
    m_pBuilder->makeString("朝から昼にかけて");
    m_pBuilder->makeItems({
        "おはようございます。",
        "こんにちは。",
    });
    m_pBuilder->makeString("夜に");
    m_pBuilder->makeItems({
        "こんばんは。",
        "おやすみなさい。",
        "さようなら。",
    });
    m_pBuilder->close();
}