#include <iostream>  // 전처리 지시자
/*
함수를 사용하고자 한다면 함수의 원형을 미리 정의해야한다
*/

using namespace std;
// iostream으로 가져온 함수 앞 std를 매번 붙이지 않도록, 
// 파이썬의 from import와 유사한

// ";" 은 종결자를 의미한다
int main() {
    // c++ 코드는 반드시 main 이름의 함수가 있어야함
    cout << "Hello world" ;
    cout << "world" << endl; // cout 을 정의하지 않았는데 사용 가능 -> 전처리 지시자
    // cout: 다음 내용을 콘솔창에 출력, endl: 줄바꿈, <<로 데이터의 방향을 의미한다
    return 0;
}