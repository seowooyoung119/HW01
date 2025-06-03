#include "Math.h"
#include <iostream>
#include <string>

using namespace std;

/*ó���ϰ� ������ ������ �Է¹޴� �Լ�(���� �� �Է� ���� ���� ����)*/
int Math::GetNumSize()
{
	string line;

	cout << "-------------------------" << endl;
	cout << "�� ���� ���ڸ� ó���Ͻðڽ��ϱ�?" << endl;

	while (true)
	{
		cout << "���� : "; cin >> line;

		if (line.find_first_not_of("-0123456789") == string::npos)
		{
			N = stoi(line);
			Num.clear();
			Num.resize(N);
			break;
		}

		cout << "������ �Է��ϼ���.\n";
	}
	return N;
}

/*ó���ϰ��� ���ڸ� �迭�� �Է� �޴� �Լ�(���� �� �Է� ���� ���� ����)*/
	void Math::GetNum()
{  

	for (size_t N = 0; N < Num.size(); ++N)
	{
		string line;

		while (true)
		{	
			cout << "-------------------------" << endl;
			cout << "�迭�� " << N << "��° " << " ���� �Է��ϼ��� : ";
			cin >> line;
			
			if (line.find_first_not_of("-0123456789") == string::npos)
			{
				Num[N] = stoi(line); break; 
			}
			
			cout << "������ �Է��ϼ���.\n";
		}
		cout << "-------------------------" << endl;
		cout << Num[N] << " �� ����Ǿ����ϴ�. " << std::endl;

	}

	cout << "--------------------------\n";
	cout << "�� " << Num.size() << "���� ����Ǿ����ϴ�.\n";
}


/* �迭�� �� ��� �Լ�(���� ��길) */
int Math::PlusNumMath() const
{
	int sum = 0;

	for (int i = 0; i < N; ++i)
	{
		sum += Num[i];
	}
	return sum;
}

/* �迭�� ��� ��� �Լ�(���� ��길) */
double Math::AvrNumMath() const
{
	double avr = static_cast<double>(PlusNumMath()) / N;
	return avr;
}

/* �������� �������� ���� ���� �˰���(���� ���ĸ�) */
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


/*�迭�� ���ڸ� �ޱ� ���� �߰� �ٸ�(�迭���� ���ڸ� ���� ȣ���ϴ� �һ�� ����)*/
void Math::GetStartConsole()
{
	Math::GetNumSize();
	Math::GetNum();

}

/* �迭�� �� �ܼ� ��� �Լ� */
void Math::PlusNumConsole() const
{
	cout << "-------------------------" << endl;
	cout << " �迭�� �� : " << Math::PlusNumMath() << endl;
}

/* �迭�� ���  �ܼ� ��� �Լ� */
void Math::AvrNumConsole() const
{
	cout << "-------------------------" << endl;
	cout << " �迭�� ��� : " << Math::AvrNumMath() << endl;
}

/* �������� �������� �ܼ� ��� �Լ� (���� �� �Է� ���� ���� ����) */
void Math::sortNumConsole()
{
	string line;

	while (true)
	{
		cout << "-------------------------" << endl;
		cout << "�ø������� 1��, ���������� 2�� : ";
		cin >> line;

		if ("1" == line)
		{
			Math::UpDownSort(true);
			cout << "-------------------------" << endl;
			cout << "�ø����� ���� ";
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
			cout << "�������� ���� ";
			for (int Count = 0; Count < N; ++Count)
			{
				cout << Num[Count];
			}
			cout << endl;
			cout<< "-------------------------" << endl;
			break;
		}

		cout << "-------------------------" << endl;
		cout << "1��(��������) �ƴϸ� 2��(�ø�����)�� �Է��ϼ���." << endl;
	}
}
