#include <iostream>

using namespace std;

int main(){
    // 원의 넓이를 구하는 프로그램

    const float PIE=3.1415926535;

    int r=3;
    float s=r*r*3.14;
    // const 정의 후 float s=r*r*PIE; 로 사용 가능
    cout<<s;

    // 반지름의 값은 달라지지만 3.14는 고정해서 사용
    // 즉, 바뀔 필요가 없는 수 or 바뀌어서는 안되는 수 = 상수
    // const로 정의해서 사용
    // 값을 바꾸고자 하면 에러 발생, 선언할 때 값을 지정해줘야 함


    return 0;
}