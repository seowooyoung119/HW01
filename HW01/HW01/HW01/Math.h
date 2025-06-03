#pragma once

#ifndef Math_H_
#define Math_H_
#include <vector>
#include <string>

using namespace std;

/*숫자들의 합, 평균, 정렬 관련 클래스*/
class Math
{

public:

	/*기본 생성 시 아무것도 없음*/
	explicit Math(size_t size = 0) : N(size), Num(size), Check(true) {};

	/*배열과 숫자를 받는 콘솔 입출력 함수*/
	void GetStartConsole();

	/*합계 콘솔 출력 함수*/
	void PlusNumConsole() const;

	/*평균 콘솔 출력 함수*/
	void AvrNumConsole() const;

	/*오름차순 내림차수 콘솔 출력 함수*/
	void sortNumConsole(); 

private:

	/*배열 받는 함수*/
	int GetNumSize();

	/*숫자를 받는 함수*/
	void GetNum();

	/*합 계산 함수*/
	int PlusNumMath() const;

	/*평균 계산 함수*/
	double AvrNumMath() const;

	/*오름차순 내림차순 정렬 함수*/
	void UpDownSort(bool check);

	vector<int>Num;
	size_t N;
	bool Check;
};


#endif