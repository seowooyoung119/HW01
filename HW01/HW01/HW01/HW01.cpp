#include <iostream>
#include <stdio.h>
#include <string>
#include "Math.h"

int main()
{
    Math Math;
    string line = "0";
    cout << "-------------------------" << endl;
    cout << "숫자들의 합과 평균, 정렬을 하겠습니다." << endl;
    while (true)
    {
        Math.GetStartConsole();
        Math.PlusNumConsole();
        Math.AvrNumConsole();
        Math.sortNumConsole();
        cout << "-------------------------" << endl;
        cout << "숫자들의 합과 평균, 정렬을 그만 하겠습니까?" << endl;
Answer: cout << "-------------------------" << endl;
        cout << "그만 하려면 YES, 아닐 경우 NO를 입력하세요" << endl;
        cin >> line;

        if ("YES" == line || "yes" == line)
        {
            break;
        }

        else if ("No" == line || "no" == line)
        {
            continue;
        }

        else
        {
            cout << "-------------------------" << endl;
            cout << "입력이 제대로 되지 않았습니다.";
        
            goto Answer;
        }
    }
    return 0;
}
