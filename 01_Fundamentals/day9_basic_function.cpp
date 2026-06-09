#include <iostream>
using namespace std;

/*
    c++ 에서 함수를 사용하기 위해
    1. 함수 정의 제공
    2. 함수 원형 제공
    3. 함수 호출
    요구된다*/

    /*
    c++에서 함수는 두 형태로 나눠짐
    1. return 값이 있는 함수
    typeName functionNmae(parameterList) 
    {
        statement(s);
        return value;
    } //함수의 타입(int 등) 과 리턴값의 타입은 동일해야함

    2. return 값이 없는 함수
    void functionName(parameterList)
    {
        statement(s);
        return;  // 생략가능
    }
*/

const float PIE = 3.14;
void cheers(int n);
float circle(int x);


int main()
{
    int a;
    cout << "input number" << endl;
    cin>>a;
    cheers(a);

    int b;
    cout << "enter number" << endl;
    float c = circle(b);
    cout << "PIE is" << c << endl;

}

void cheers(int n){
    for (int i =0; i<n; i++) {
        cout << "Cheers" << endl;
    }
}

float circle(int x) {
    return x * x* PIE;
}