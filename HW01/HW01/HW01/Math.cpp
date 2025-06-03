#include "Math.h"
#include <iostream>
#include <string>

using namespace std;

/*처리하고 숫자의 갯수를 입력받는 함수(정수 외 입력 방지 구문 있음)*/
int Math::GetNumSize()
{
	string line;

	cout << "-------------------------" << endl;
	cout << "몇 개의 숫자를 처리하시겠습니까?" << endl;

	while (true)
	{
		cout << "갯수 : "; cin >> line;

		if (line.find_first_not_of("-0123456789") == string::npos)
		{
			N = stoi(line);
			Num.clear();
			Num.resize(N);
			break;
		}

		cout << "정수만 입력하세요.\n";
	}
	return N;
}

/*처리하고픈 숫자를 배열에 입력 받는 함수(정수 외 입력 방지 구문 있음)*/
	void Math::GetNum()
{  

	for (size_t N = 0; N < Num.size(); ++N)
	{
		string line;

		while (true)
		{	
			cout << "-------------------------" << endl;
			cout << "배열의 " << N << "번째 " << " 값을 입력하세요 : ";
			cin >> line;
			
			if (line.find_first_not_of("-0123456789") == string::npos)
			{
				Num[N] = stoi(line); break; 
			}
			
			cout << "정수만 입력하세요.\n";
		}
		cout << "-------------------------" << endl;
		cout << Num[N] << " 이 저장되었습니다. " << std::endl;

	}

	cout << "--------------------------\n";
	cout << "총 " << Num.size() << "개가 저장되었습니다.\n";
}


/* 배열의 합 계산 함수(오직 계산만) */
int Math::PlusNumMath() const
{
	int sum = 0;

	for (int i = 0; i < N; ++i)
	{
		sum += Num[i];
	}
	return sum;
}

/* 배열의 평균 계산 함수(오직 계산만) */
double Math::AvrNumMath() const
{
	double avr = static_cast<double>(PlusNumMath()) / N;
	return avr;
}

/* 오름차순 내림차순 버블 정렬 알고리즘(오직 정렬만) */
void Math::UpDownSort(bool Check)
{
	for (int Counta = 0; Counta < N - 1; ++Counta)
	{
		for (int Countb = 0; Countb < N - 1 - Counta; ++Countb)
		{
			if (Check ? Num[Countb] > Num[Countb + 1] : Num[Countb] < Num[Countb + 1])
			{
				swap(Num[Countb], Num[Countb + 1]);
			}
		}
	}
}


/*배열과 숫자를 받기 위한 중간 다리(배열보다 숫자를 먼저 호출하는 불상사 막기)*/
void Math::GetStartConsole()
{
	Math::GetNumSize();
	Math::GetNum();

}

/* 배열의 합 콘솔 출력 함수 */
void Math::PlusNumConsole() const
{
	cout << "-------------------------" << endl;
	cout << " 배열의 합 : " << Math::PlusNumMath() << endl;
}

/* 배열의 평균  콘솔 출력 함수 */
void Math::AvrNumConsole() const
{
	cout << "-------------------------" << endl;
	cout << " 배열의 평균 : " << Math::AvrNumMath() << endl;
}

/* 오름차순 내림차순 콘솔 출력 함수 (정수 외 입력 방지 구문 있음) */
void Math::sortNumConsole()
{
	string line;

	while (true)
	{
		cout << "-------------------------" << endl;
		cout << "올림차순은 1번, 내림차순은 2번 : ";
		cin >> line;

		if ("1" == line)
		{
			Math::UpDownSort(true);
			cout << "-------------------------" << endl;
			cout << "올림차순 정렬 ";
			for (int Count = 0; Count < N; ++Count)
			{
				cout << Num[Count];
			}
			cout << endl;
			cout << "-------------------------" << endl;
			break;

		}

		else if ("2" == line)
		{
			Math::UpDownSort(false);
			cout << "-------------------------" << endl;
			cout << "내림차순 정렬 ";
			for (int Count = 0; Count < N; ++Count)
			{
				cout << Num[Count];
			}
			cout << endl;
			cout<< "-------------------------" << endl;
			break;
		}

		cout << "-------------------------" << endl;
		cout << "1번(내림차순) 아니면 2번(올림차순)을 입력하세요." << endl;
	}
}
