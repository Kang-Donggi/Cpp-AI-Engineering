#include <iostream>

using namespace std;

int main()
{
    // 문자열
    // char a[5] ={'h', 'e', 'l', 'l', 'o'}
    // 위 상태로 출력하면 뒤에 의미없는 문자 붙어 나옴 
    // 배열 크기가 5라서 문자열 종료표시 \0 이 들어가지 못해서

    //char a[6]={'h', 'e', 'l', 'l', 'o'}; // 정상 출력

    // 실제로는 아래와 같이 많이 사용
    char a[]="hello";
    cout<<a;

}