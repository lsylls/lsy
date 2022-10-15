#pragma once
#include"def.h"
#ifndef CLASS
#define CLASS
struct Classroom
{
	char* name;//教室名称
	int num;//教室人数
	int groups;//分组
	void print() const;
	//virtual int devide(int num, int groups)const = 0 {};
	Classroom& operator+=(const Classroom v)//运算符重载
	{
		return *this;
	}
	Classroom(char* name, int num, int groups) {};
	~Classroom();
private:
	int code;//教室编码不可修改
};
Classroom::Classroom(char* name, int num, int groups)
{
	Classroom::name = name;
	Classroom::num = num;
	Classroom::groups = groups;
}
Classroom::~Classroom()
{
	free(name);
	free(&num);
}
void Classroom::print()const
{
	cout << "the code of class is " << Classroom::code << endl;

}


struct Group :public Classroom
{
	int gnum;//小组成员个数
	char* gname;//小组名称
	//virtual int devide(int num, int groups) {};
	Group(char* name, int num,int group) :Classroom(name, num, group) {};
	~Group();
};
Group::~Group()
{
	free(gname);
	free(&gname);
}

#endif

