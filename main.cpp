#include"Classroom.h"
#include"def.h"
#include"test.h"
inline void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	//引用及内联
	int a = 3, b = 4;
	swap(a, b);
	cout << "a = " << a << " " << "b = " << b << endl;


	//类、构造函数、析构函数、const、继承
	char* cname;
	int cnum,cgroup;
	cout << "请输入教室名称：";
	cin >> cname;
	cout << endl;
	cout << "请输入教室人数：";
	cin >> cnum;
	cout << "请输入分组数：";
	cin >> cgroup;
	Classroom A(cname, cnum,cgroup);
	Classroom B = Group(cname, cnum, cgroup);//通过子类调用父类构造函数（继承）
	//注意：当含有纯虚函数时，不允许强制转换

	//虚函数的使用见test.h


	//vector
	vector<int> v;
	v.push_back(5);
	v.push_back(7);
	v.push_back(9);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	v.pop_back();
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	int c1 = v.front();
	cout << "第一个元素是（v.front）：" << c1 << endl;
	int c=v.at(1);
	cout << "第二个元素是（v.at）：" << c << endl;
	int c2 = v.empty();
	cout << "v为空吗？（v.empty）" << endl;
	if (c2 == 1)
		cout << "v为空" << endl;
	else
		cout << "v不为空" << endl;
	v.clear();
	cout << "使用v.clear后" << endl;
	c2 = v.empty();
	if (c2 == 1)
		cout << "v为空" << endl;
	else
		cout << "v不为空" << endl;



	//智能指针
	shared_ptr<Classroom>tPointer = make_shared<Classroom>(cname, cnum, cgroup);//自动释放内存

}