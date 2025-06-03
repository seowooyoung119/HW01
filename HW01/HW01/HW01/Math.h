#pragma once

#ifndef Math_H_
#define Math_H_
#include <vector>
#include <string>

using namespace std;

/*���ڵ��� ��, ���, ���� ���� Ŭ����*/
class Math
{

public:

	/*�⺻ ���� �� �ƹ��͵� ����*/
	explicit Math(size_t size = 0) : N(size), Num(size), Check(true) {};

	/*�迭�� ���ڸ� �޴� �ܼ� ����� �Լ�*/
	void GetStartConsole();

	/*�հ� �ܼ� ��� �Լ�*/
	void PlusNumConsole() const;

	/*��� �ܼ� ��� �Լ�*/
	void AvrNumConsole() const;

	/*�������� �������� �ܼ� ��� �Լ�*/
	void sortNumConsole(); 

private:

	/*�迭 �޴� �Լ�*/
	int GetNumSize();

	/*���ڸ� �޴� �Լ�*/
	void GetNum();

	/*�� ��� �Լ�*/
	int PlusNumMath() const;

	/*��� ��� �Լ�*/
	double AvrNumMath() const;

	/*�������� �������� ���� �Լ�*/
	void UpDownSort(bool check);

	vector<int>Num;
	size_t N;
	bool Check;
};


#endif