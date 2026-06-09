#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 정수, 컴퓨터 메모리에는 한계가 있다 즉, 무한하게 저장할 수 없다
    // 따라서 특정 상황에 적합한 정수형을 사용해야함
    // short, int, long, long long 모두 음/양의 정수, 0을 저장가능한 dtype
    // 나열 순서대로 큰 비트를 저장할 수 있다

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout<<"int size"<<sizeof n_int <<endl;
    cout<<"max_value"<< n_int<<endl;

    cout<<"short value"<<sizeof n_short <<endl;
    cout<<"max_value"<< n_short<<endl;

    cout<<"long value"<<sizeof n_long <<endl;
    cout<<"max_value"<< n_long<<endl;

    cout<<"long long value"<<sizeof n_llong <<endl;
    cout<<"max_value"<< n_llong<<endl;

    // unsigned를 사용하면 음의 정수를 사용하지 않는 대신 더 많은 범위 표현 가능
    // short는 -32768-0-32767을 표현 가능 unsigned를 쓰면 0-65535 표현

    unsigned int a;
    unsigned short b;
    unsigned long c;
    unsigned long long d;

    // unsigned short b=-1 / 65545 출력, 마지막으로 돌아감

}