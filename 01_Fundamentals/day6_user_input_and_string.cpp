#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //strlen = 문자열 길이 반환 cstring 헤더파일에 정의되어있음
    // sizeof 변수 바이트 크기 반환

    const int Size=15;
    char name1[Size]; // 비어있는 배열
    char name2[Size] = "C++programming";

    cout << "My name is" << name2 << "What is your name??";

    // cin>>name1; 
    // 사용자의 입력을 받아 변수에 할당
    // 사용자 입력에 space가 들어가면 문자열의 끝으로 판단 
    // 가령, k dg가 들어가면 k만 할당됨

    cin.getline(name1, Size);
    // getline 혹은 get 으로 공백 포함 문자열

    cout<<"Your name has"<<strlen(name1)<<"characters and is stored in a"<<sizeof(name1)<<"byte array";
    name2[3]='\0';
    // 아래에서 앞에 3개 문자(C++)를 출력하기 위해 4번째에 문자열 종료 삽입
    cout<<"The first three characters of my name are"<<name2<<".";
}