/*
** シングルトン実装で注意すること
1. デフォルトコンストラクタをプライベートに宣言する。
    クライアントに新規インスタンスを作成できないようにする。
2. シングルトンをコピー不能にする。
    2つ目のインスタンスを作成できないようにするため。
    コピーコンストラクタと代入演算子をプライベートに宣言する。
3. クライアントにシングルトンインスタンスを削除させないこと
    デストラクタをプライベートにせんげんする。
4. getInstance()メソッドは参照を返すようにする。
    ポインタを返すとそのオブジェクトを削除できるようになってしまう。
*/
#pragma once
#include <iostream>

class CSingleton{
private:
    CSingleton(){};
    ~CSingleton(){};
    CSingleton(const CSingleton &){};
    const CSingleton &operator=(const CSingleton &){};

public:
    static CSingleton &getInstance();
};