#include<iostream>
#include<vector>
#include<string>
using namespace std;

void test1()
{
	//����������vector
	vector<int> v;
	vector<char> v2;
	vector<string> v3;

	//���첢��ʼ��N��val
	vector<int> v4(10, 5);//����10��5

	string s2 = "0123456789";
	vector<char> v5(s2.begin(), s2.end());

	//�������죬��һ���Ѿ����ڵĿ���һ���µ�
	vector<char> v6(v5);

}

void test2()//���ֱ�����ʽ�����ǿɶ���д�Ľӿ�
{
	//1���������������ɶ���д
	string s = "0123456789";
	vector<char> v(s.begin(), s.end());


	//���������
	vector<char> ::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;


	
	vector<char>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		*it = 'a';//д�룬����֮��ԭ�е�λ�øĳ�a
		++it;
	}
	cout << endl;

	//1����Χfor
	for (char& ch : v)
	{
		cout << ch << " ";
		ch = 'b';//д��'b'
	}
	cout << endl;

	//3��������forѭ��
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		v[i] = 'c';//д��c
	}
	cout << endl;

	//������ӡ
	for (char& ch : v)
	{
		cout << ch << " ";
	}
	cout << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}