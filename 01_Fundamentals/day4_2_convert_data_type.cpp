#include <iostream>

using namespace std;

int main(){
    //데이터형 변환
    /*
     c++는 아래 상황에서 자동으로 데이터형을 바꿔줌
     1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
     2. 수식에 데이터형을 혼합해서 사용했을 때
     3. 함수에 매개변수를 전달할 떄
     */

     int a=3.141592;
     // 3으로 출력
     // 강제적으로 데이터형 변환
     // typeName(a) or (typename)a
     
     char ch ='M';

    cout<<int(ch)<<" "<<int(ch);
    // 아스키코드에서 대응되는 77 출력됨

    //C++ 제한적인 데이터형 변환 연산자 등장
    // static_cast(typeName)
    // 위와 동일 결과, but 차이 존재 프렌드에서 알아보자

}