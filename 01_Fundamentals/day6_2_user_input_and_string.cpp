#include <iostream>

using namespace std;

int main()
{
    // string 문자열
    /*
    C스타일로 string 객체 초기화 가능
    cin을 사용해 string 객체에 키보드 입력 저장 가능
    cout을 통해 string 객체 디스플레이
    배열 표기로 string 객체에 저장된 개별적인 문자에 접근 가능
    string과 문자열은 기본적으로 유사, 

    다만, 배열은 다른 배열에 통째로 대입 불가지만 string은 가능
    */

    char char1[20];
    char chat2[20]="jaguar";
    string str1;
    string str2="panda";

    //char1=char2 // 안된다
    str1=str2; // 가능

    cout<<str1[0];
    // 인덱스 접근도 가능



}