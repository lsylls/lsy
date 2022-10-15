#pragma once
#include"def.h"
class test
{
public:
	virtual int devide()const = 0 {};
};

class test1 :public test
{
	virtual int devide() { return 999; };
};
