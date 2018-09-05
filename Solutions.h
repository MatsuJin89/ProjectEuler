#pragma once
#include "stdafx.h"
#include "Solutions.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solutions
{
private:
	vector <int> intVector;
	int sum = 0;
public:



	void exercise3()
	{
		int ex = 13195, moduloCounter = 0;

		for (int i = 2; i <= ex; i++)
		{
			for (int j = i; j >= 2; j--)
			{
				if (i%j == 0)
					moduloCounter++;
			}
			if (moduloCounter == 1)
				intVector.push_back(i);
			moduloCounter = 0;
		}

		int largestPF = 0;
		long long answer = 600851475143;
		cout << to_string(answer);

		for (int k = 0; k <= answer; k++)
		{
			if (answer % intVector[k] == 0)
			{
				answer = answer / intVector[k];
				largestPF = intVector[k];
				k = 0;
				cout << "\n\ncurrent largetst Prime Factor is: " + to_string(largestPF) + " and current answer is: " + to_string(answer) + "\n\n";
			}
		}
		cout << "\n\nlargetst Prime Factor is: " + to_string(largestPF);
	}


	void exercise2()
	{
		int nextNum = 3, i = 0, sum = 0;
		intVector.push_back(1);
		intVector.push_back(2);


		while (nextNum < 4000000) {
			intVector.push_back(nextNum);
			i++;
			nextNum = intVector[i] + intVector[i + 1];
		}


		for (int i : intVector)
			//			cout << to_string(i) + " ";
		{
			if (i % 2 == 0)
				sum += i;
		}

		cout << "\n The Sum of the even Fibonacci < 4mil is " + to_string(sum) + " ";

	}


	void exercise1()
	{
		for (int i = 1; i < 1000; i++)
		{
			if (i % 3 == 0 | i % 5 == 0)
			{
				intVector.push_back(i);
			}
		}

		for (int j : intVector)
			sum += j;

		cout << "\nNew sum is: " + to_string(sum) + "\n";
	}


};