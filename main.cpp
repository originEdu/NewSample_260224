#include<iostream>

using namespace std;

//숫자 상수 1, 2, 3, -1 등
//문자 상수 'A', 'B' 등
//문자열 상수 "AB" 등
//연산자 -> operator, 산술연산자(+, -, *, /, %)

int main()
{
	cout << "안녕하세요, 세계!" << endl;
	cout << 'A' << endl; //한글자는 ''으로 묶고
	cout << "ABC" << endl; //여러글자는 ""으로 묶는다 ''으로 묶으면 숫자로 변환되어 출력함

	int Money = 0; // =은 대입연산자 -> 오른쪽에 있는 것을 왼쪽에 대입시킨다
	int GoldOfBank = 0; //언리얼기준 변수명은 파스칼 표기법으로 해야함, 대문자로시작 단어 바뀔때 마다 대문자로시작
	cin >> Money;
	cout << Money << endl;

	return 0;
}