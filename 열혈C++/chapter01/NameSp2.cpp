#include <iostream>

namespace BestComImpl{  // 이름공간 안에서 함수의 선언만 삽입
    void SimpleFunc(void);
}

namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void){  // 이름공간 안에 선언된 함수의 정의 부분
    std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void){
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}