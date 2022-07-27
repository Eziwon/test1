#include <iostream>

using namespace std;

int main() {
    //1. 이름 입력받기
    string user_name;
    cout << "이름을 입력하세요." << endl;
    cin >> user_name;
    cout << "입력된 이름은 " << user_name << "입니다.\n" << endl;

    //2. 두개의 숫자를 입력받은 후, 두 숫자의 합을 출력
    int i, j;
    cout << "Give two numbers" <<endl;
    cin >> i >> j;
    cout << "Sum = " << i+j << "\n";

    return 0;
}