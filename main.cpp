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
	//���ü�����
	int a = 3, b = 4;
	swap(a, b);
	cout << "a = " << a << " " << "b = " << b << endl;


	//�ࡢ���캯��������������const���̳�
	char* cname;
	int cnum,cgroup;
	cout << "������������ƣ�";
	cin >> cname;
	cout << endl;
	cout << "���������������";
	cin >> cnum;
	cout << "�������������";
	cin >> cgroup;
	Classroom A(cname, cnum,cgroup);
	Classroom B = Group(cname, cnum, cgroup);//ͨ��������ø��๹�캯�����̳У�
	//ע�⣺�����д��麯��ʱ��������ǿ��ת��

	//�麯����ʹ�ü�test.h


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
	cout << "��һ��Ԫ���ǣ�v.front����" << c1 << endl;
	int c=v.at(1);
	cout << "�ڶ���Ԫ���ǣ�v.at����" << c << endl;
	int c2 = v.empty();
	cout << "vΪ���𣿣�v.empty��" << endl;
	if (c2 == 1)
		cout << "vΪ��" << endl;
	else
		cout << "v��Ϊ��" << endl;
	v.clear();
	cout << "ʹ��v.clear��" << endl;
	c2 = v.empty();
	if (c2 == 1)
		cout << "vΪ��" << endl;
	else
		cout << "v��Ϊ��" << endl;



	//����ָ��
	shared_ptr<Classroom>tPointer = make_shared<Classroom>(cname, cnum, cgroup);//�Զ��ͷ��ڴ�

}