/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
#include<fstream>
#include <functional>
using namespace std;
using namespace std::placeholders;

void output_date(const vector<string>&s)
{
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	}
	cout << endl;

}
void output_date(const vector<int>&s)
{
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	}
	cout << endl;

}
void output_date(const vector<string>::iterator beg,const vector<string>::iterator iter)
{
	for (auto i = beg; i != iter; i++)
	{
		cout << *i << "  ";
	}
	cout << endl;

}
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
bool isEnoughLEngth(const string &s1)
{
	return s1.size() > 5;
}
/////////////////////////////lambda���ʽ����///////////////

void add(int az)
{
	auto sumint = [az](int b) { return az + b; };
	cout << sumint(1)<<"  ";
}
void biggies(vector<string>&words, vector<string>::size_type sz)
{
	stable_sort(words.begin(),words.end(),
		[sz](const string &s1, const string &s2) { return s1.size() < s2.size(); });
	for_each(words.begin(), words.end(), [](const string &s) { cout << s << endl; });
	
}

void bigge(vector<string> &words, vector<string>::size_type sz,ostream &os=cout,char c=' ')
{	
	//os��ʽ����������ò���ʽ��c��ʽ����ֵ����ʽ
	for_each(words.begin(), words.end(),
		[&, c](const string &s) { os << s << c; });
	for_each(words.begin(), words.end(),
		[=, &os](const string &s) { os << s << c; });
}
ostream &print(ostream&os, const string &s, char c)
{
	return os << s << c;
}
int main(int argc, char**argv)
{
	vector<string >vec{ "china", "chinese", "word", "hello", "dear", "marry", "hurt" };
	stable_sort(vec.begin(), vec.end(), isShorter);//�����ֵ������У������ó��ȴ�С���У������������ʹ���ֵ���
	output_date(vec);
	auto iter = partition(vec.begin(), vec.end(), isEnoughLEngth);
	output_date(vec.begin(), iter);
	auto countnum = count_if(vec.begin(), vec.end(),
		[](const string &s) { return s.size() > 5; });
	cout <<"vec����"<< countnum <<"������5�ĵ���"<< endl;
	stable_sort(vec.begin(), vec.end(), 
		[](const string &s1, const string&s2)
		{return s1.size() > 5;});//���͵�lanbda�հ����ʽ��ϵ�����õĺ�����
	auto sum = [](int a, int b) { return a + b; };
	cout << sum(6, 5) << endl;;
	add(6);
	//�������ò���һ��lambda����ʱ�����뱣֤�ڱհ�ִ��ʱ�����Ǵ��ڵ�
	vector<int>veint{ 1, -2, 3, 67, 32, -6, -32, -32, 6, -3, -523, -45, -5334, -3531, 632, 45, 32, 634, 6, 23, 523 };
	transform(veint.begin(), veint.end(), veint.begin(),
		[](int i)->int { if (i < 0) return -i; else return i; });
	//����˵���������Ҫ��β�÷������͡����ǲ���ʱ����Ҫβ�÷�������Ҳ���Ա���ͨ����Ӧ�����Ż���Ľ����
	output_date(veint);
	//auto wc = find_if(vec.begin(),vec.end(),bind(_1,add));

	system("pause");
}*/