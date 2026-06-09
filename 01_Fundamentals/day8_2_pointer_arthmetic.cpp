#include <iostream>
// 동적 구조체
// temp* ps = new temp;
// 구조체 -> 데이터 타입을 프로그래머가 직접 만든 것
// 구조체의 멤버(안에 있는 변수) 에 접근할 때는 ->를 사용
// 일반 변수: animal.age  / 동적 구조체 animal->age

struct MyStruct{
    char name[20];
    int age;
};

int main(){
    using namespace std;

    MyStruct* temp = new MyStruct;

    cout << "your name";
    cin >> temp->name;

    cout << "your age";
    cin >> (*temp).age;
        // (*)는 구조체 멤버 접근에서 -> 와 동일 역할

    cout << "Hi" << temp->name;
    cout << "you are" << temp->age;

    // [MyStruct 공간을 메모리에서 해제
    delete temp;
}