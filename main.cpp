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

	//배열 스타트
	int MoneyArray[10] = {0}; // Money
						 //    [0][1][2][3][4][5][6][7][8][9] Money에서부터 얼마만큼 떨어져있는가
	MoneyArray[0] = 10; //시작위치에서 0만큼 떨어진 곳에 10 대입
	MoneyArray[1] = 2;  //시작위치에서 1만큼 떨어진 곳에 2 대입

	//위에 것과 아래 것은 같은 것이다.
	*(MoneyArray+0) = 100;
	*(MoneyArray + 1) = 20;

	//반복문 스타트
	for (int Index = 0; Index < 10; Index++) //관례적으로 Index는 i로 변환함 -> 예전 포트란의 잔해
	{
		MoneyArray[Index] = 10;
	}

	//C++ 11이상에서 ranged for문도 사용한다, 아래 것과 위에 것의 같은 것
	for (int data : MoneyArray)
	{
		data = 10;
	}

	//4byte 2^32 -> 약 -2G ~ +2G의 숫자 표현가능
	int MoneyOfGiwon = 61; //메모리 공간은 4바이트 잡고 있다
	//자료형 변수명 = 초기화 상수; 제일 기본적인 포멧
	
	//<<endl의 의미 한줄띔과 동시에 버퍼를 비워라라는 뜻
	//콘솔 입출력장치가 느리기에 "HelloWorld"를 출력할 때
	//cpu가 노는 것을 방지하기 위해 buffer에 임시로 저장하고 나중에 한번에 출력하는데
	//endl는 버퍼를 비우고 출력하는 의미도 내포되어 있다.

	return 0;
}