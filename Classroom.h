#pragma once
#include"def.h"
#ifndef CLASS
#define CLASS
struct Classroom
{
	char* name;//��������
	int num;//��������
	int groups;//����
	void print() const;
	//virtual int devide(int num, int groups)const = 0 {};
	Classroom& operator+=(const Classroom v)//���������
	{
		return *this;
	}
	Classroom(char* name, int num, int groups) {};
	~Classroom();
private:
	int code;//���ұ��벻���޸�
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
	int gnum;//С���Ա����
	char* gname;//С������
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

