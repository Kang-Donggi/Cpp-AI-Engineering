#include <iostream>

using namespace std;

int main() {
    int a;  
    a=7; 

    int b = 3;

    a=5;
    b=10;

    //{ int b;
    //    {
    //        int a;
    //        b=3;  // 블록 밖에서 정의되었기에 사용 가능
    //    }
    //    a=5; // a는 블록 안에서 정의됨 밖에서 사용 불가
    //} 변수는 사용되기 전 정의되야함을 보여준다

    // 변수는 어디에 저장되는가? -> 컴파일러가 담당
    // 출력에서 &(주소 연산자)를 붙이면 확인 가능
    cout<< "a = " << &a << "b = " << &b << endl;
}