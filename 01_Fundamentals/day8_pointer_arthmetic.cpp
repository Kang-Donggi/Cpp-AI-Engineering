#include <iostream>
#include <cstring>
# define SIZE 20

int main() {
    using namespace std;

    char animal[SIZE];
    char* ps;

    cout<<"animal anme";
    cin>>animal;

    ps = new char[strlen(animal)+1]; // strlen = 변수의 크기 반환
    strcpy(ps, animal); // strcpy = animal의 값을 ps에 복사

    cout << "animal name copy" << endl;
    cout << "animal name is" << animal << "and address is" << (int*)animal << endl;
    cout << "copy name is" << ps << "and address is" << (int*)ps<<endl;
    // 복사 했을 때 animal과 ps는 같지만 주소 (int*)animal과 (int*)ps는 다르다

    /*문자열을 사용할 때 string을 쓰면 편하지만.. 
    char형의 배열로 문자열을 사용할 떄 문자열의 크기를 미리 컴파일러에 알려줘아함

    위의 케이스는 몇 글자 입력이 들어올지 모르는 상황에서 new 연산자를 통해
    입력의 크기가 어떻게 되던지 충분한 크기의 메모리를 할당한다
    -> 컴파일 시간에 배열 크기를 결정하는 것 보다 
    실행시간에 배열 크기를 결정하는게 메모리 측면에서 유리

    왜? -> 입력 문자가 2글자 or 100글자가 들어온다면 
    컴파일 시간 배열 (정적) 할당은 무조건 new char[100]으로 메모리 할당해야함

    실행시간 배열 (동적) 할당은 입력을 보고 필요한 만큼만 메모리 할당, 복사를 하더라도 더 유리하다
    */
    
    
}