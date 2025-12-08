#pragma once
class Calculator
{
protected:
	int iNo1; // 변수 선언 먼저/따로 구분
	int iNo2;
private:
	void input();
protected:
	virtual int calc(int iNo1, int iNo2) = 0;
public:
	void run();
};

