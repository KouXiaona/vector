#include<iostream>
#include<vector>
#include<string>
using namespace std;

void test1()
{
	//构建三个空vector
	vector<int> v;
	vector<char> v2;
	vector<string> v3;

	//构造并初始化N的val
	vector<int> v4(10, 5);//构造10个5

	string s2 = "0123456789";
	vector<char> v5(s2.begin(), s2.end());

	//拷贝构造，用一个已经存在的拷贝一个新的
	vector<char> v6(v5);

}

void test2()//三种遍历方式，都是可读可写的接口
{
	//1、迭代器遍历，可读可写
	string s = "0123456789";
	vector<char> v(s.begin(), s.end());


	//反向迭代器
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
		*it = 'a';//写入，遍历之后将原有的位置改成a
		++it;
	}
	cout << endl;

	//1、范围for
	for (char& ch : v)
	{
		cout << ch << " ";
		ch = 'b';//写入'b'
	}
	cout << endl;

	//3、方括号for循环
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		v[i] = 'c';//写入c
	}
	cout << endl;

	//遍历打印
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