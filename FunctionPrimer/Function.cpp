#include<iostream>
#include <vector>
#include <initializer_list>
#include <string>
#include<cstdarg>
using namespace std;
typedef int arrT[10];//���ͱ���
using arrT = int[10];//�ȼ�����
arrT* funlc(int i);//����ָ��
int fact(int val)//�׳�
{
	int ret = 1;
	while (val>1)
		ret *= val--;
	return ret;
}
size_t count_calls()//�����������õĴ���
{
	static size_t ctr = 0;
	return ++ctr;
}
void print(vector<int >::const_iterator beg,
	vector<int>::const_iterator end);//��ͷ�ļ��н��к�������

void reset(int &i)
{
	i = 0;//��������������ָ�룬��ͬ�ڸ������ƣ�ʹ�����ñ��⿽������Լ�ռ����
}
bool isShorter(const string&s1, const string &s2)//������������������ı������βε�ֵ����ý�������Ϊ�������ã�
{
	return s1.size() > s2.size();//�Ƚ������ַ����Ƿ����
}
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{//����һ�����뷵�غü������ݵ��ˣ�Ҫô���¶������ݽṹ��Ҫô���һ����ʽ����
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}
void func(const int i)//func �ܶ�ȡi�����ǲ�����iдֵ��const����
{
}
void funcc(int i )//i)//error C2084: ������void func(const int)����������;�μ���func����ǰһ������
{//��仰�Ǵ���ģ����������Ϊ��������Щ����

}

//����ָ��������β���const ����

int i = 42;
const int *cp = &i;
const int &r = i;
const int &r2 = 42;
//int *p = cp;���Ͳ�ͬ��int &r3=r;int &r4=42;//�ǳ�������
bool is_sentence(const string&s)
{
	string::size_type ctr = 0;//���s�ַ����Ƿ�Ϊһ������
	return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}
bool is_enpty(string&s)
{
	return s.empty();
}
 
//����ָ�볣�õ����ּ���
//1.ʹ�ñ��ָ�����鳤��
void print(const char *cp)
{				while (*cp)//ÿһ���ַ����н�����Ϊ/0��Ϊ�ж��жϽ�����Ϊ�գ�
			cout << *cp++;
}//�������н�������ʶ�ַ�������������֮�����飬������Ч��
//2.ʹ�ñ�׼��淶����������
void print(const int *beg, const int *end)
{
	while (beg!= end)
		cout << *beg++ << endl;
}//��׼�⺯��begin()��end();


//3.��ʽ����һ�������С���β�
void print(const int ia[], size_t size)
{
	for (size_t i = 0; i != size;i++)
	{
		cout << ia[i] << endl;

	}
}
void print(int (&arr)[10])//&arr���ҵ����űز����٣�����������ָ��arr����Ϊ���õ�����;
//�Ӻ�Ϊ����10���������������
{
	for (auto elem:arr)
	{
		cout << elem << endl;
	}
}

void print(int (*matrix)[10],int Rowsize);
//int (*matrix)[10], int Rowsize);�����Ǹ����ε�����ָ��
//int *matrix[10]��ͬ��10��ָ����ɵ����飻


initializer_list<int>lii;
initializer_list<string>ls;
void error_msg(initializer_list<string> li)
{
	for (auto beg = li.begin(); beg != li.end();++beg)
	{
		cout<<*beg<<endl;//����stringͷ�ļ�
	}
}//����initializer_list�β��д���һ��ֵ�����б������һ�Ի������У�

//void error_msg(ErrCode e, initializer_list<string>li);ErrCode �����и�����쳣�ࣻ
//{
//	cout << e.msg() << ":";
//	for (const auto &elem : li)
//		cout << elem << " ";
//	cout << endl;
//}
void foo(...);
void foo(int ,int, ...);//parm_list �����б�
void swap(int &v1, int&v2)
{
	if (v1 == v2)
		return;
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
	//return 0�����󣬲���
}//����������

bool str_subrange(const string &s1, const string &s2)
{
	if (s1.size() == s2.size())
		return s1 == s2;
	auto size = (s1.size() < s2.size() ? s1.size() : s2.size());
	for (decltype(size) i = 0; i != size; ++i)
	{
		if (s1[i] != s2[i])
			return true;//return ֱ�Ӵ���
		//warning C4715: ��str_subrange��: �������еĿؼ�·��������ֵ�˴�Ӧ����return
		//�ں���return��forѭ���������ҲӦ����һ��return�����û����ó�����󣬺ܶ�������޷�ʶ���������;
	}
	return true;//Vs2013�ı���������ʶ���������
}
	string make_plural(size_t ctr,const string &word,const string&ending)
	{
		return (ctr > 1) ? word + ending : word;//����ֵ ����һ����ʱ����
	}
	vector<string>process(string expected,string actual)
	{
		if (expected.empty())//�����ŷ���ֵ��c++11������ӵ����Բ���
		{
			return{};
		}
		else if (expected == actual)
			return{ "functionX", "OKEY" };
		else
			return{ "Function", expected, actual };
	}

	int  factorial(int val)//�׳˵ĵݹ��㷨
	{
		if (val > 1)
			return factorial(val - 1)*val;
		return 1;
	}
	int print(vector<int >&li,int i=0)//�ݹ����vector�е�ֵ
	{
		
		if (i==li.size())
			return 0;
		cout << li[i++] <<" ";
		print(li, i);
	
	}
	auto  function(int i)->int(*)[10];//β��ķ���������Ҫauto
	//ʹ��decltype
	int odd[] = { 1, 3, 5, 7, 9 };
	int even[] = { 2, 5, 346, 7, 3};
	decltype(odd)*arrptr(int i)//ָ��һ��ָ�������ָ�������������ά�ȱ�����ͬ
	{
		return (i % 2) ? &odd : &even;
	}
	//////////////////////////////////////////////////////////////////////////
	//��������
	//////////////////////////////////////////////////////////////////////////
	//main������������
	
	
	//Record  lookup(const phone&);��ʵ֤����Record�Ǳ������ö�������֪��ʲô��˼��������Ȼ�������ԣ�α����
	//Screen&moveHome();ͬ��
	//////////////////////////////////////////////////////////////////////////
	//const_cast��������������
	const string &shorterString(const string &s1, const string &s2)
	{
		cout << "���� const string &" << endl;
		return s1.size() <= s2.size() ? s1 : s2;//�������Ͷ�������
	}
	string &shorterString(string &s1, string &s2)
	{
		cout << "���� string &2" << endl;
		auto &r = shorterString((const_cast<const string&>(s1)), (const_cast<const string &>(s2)));
		return const_cast<string &>(r);//Ϊ�˰�ȫ
	}
	//////////////////////////////////////////////////////////////////////////
	//������;��������
	//////////////////////////////////////////////////////////////////////////
	typedef string::size_type sz;
	string screen(sz ht = 24, sz wid = 80, char background = ' ');
	//string screen(sz ht,sz wid, char background = ' ');//�����޸�Ĭ��ʵ�Σ���ʵ���Ѿ��������ĺ�����
	string screen(sz ht,sz wid, char background );
//	constexpr int new_sz(){ return 43; };vs2013Ĭ�ϲ�֧��constexpr�ؼ���
	//////////////////////////////////////////////////////////////////////////
	//���԰���
	//////////////////////////////////////////////////////////////////////////
	//����Ԥ�����  assert��NDEBUG;
	void printl(const int ia[], size_t size)
	{
		#ifndef  NDEBUG
		//vs2013�����Ż� __FUNCTION__��ź��������ֶ�����__FUNC__
		cerr << __FUNCTION__ << "array size is" << size << endl;
		#endif
	}
	//////////////////////////////////////////////////////////////////////////
	///�������غ���ʱ��Ӧ�þ�������ǿ������ת���������ʵ��Ӧ����ȷʵ��Ҫǿ������ת������˵��������Ƶ��βμ��ϲ�����
	//////////////////////////////////////////////////////////////////////////

	//����ָ��
	bool lengthCompare(const string &, const string &);
	bool(*pf)(const string &, const string &);//pf�Ǻ���ָ�룬ָ�����������ָ�롣
	bool *plf(const string &, const string &);//����һ��Ϊboolָ��ĵĺ�����
	void ff(int *);
	void ff(unsigned int);
	void(*pf1)(unsigned int) = ff;//��Ҫ�β����ͷ������;�ȷƥ��ſ���ʹ��
	void useBigger(const string &s1, const string &s2, bool pf(const string&, const string &));//��ʽ�Ľ�pfת��Ϊ����ָ��(*pf)
	typedef decltype(lengthCompare) Func2;//decltype �ķ�������Ϊ�������Ͳ�����ָ�����͡����Ժ���func�� Ϊ�������͵�����������������ʱ�����������Զ�����ת��Ϊָ�����ͣ�
	typedef bool func1(const string&, const string &);

	//////////////////////////////////////////////////////////////////////////
	typedef decltype(lengthCompare) *Funcp2;//���������Զ���������ת��Ϊָ���� funcp �Ǻ���ָ������
	typedef bool *funcp1(const string&, const string &);



int main(int argc,char **argv)
{
	string window;
//	window = screen();//��ֵ��䲻�ܷ�������������
//	window = screen(66);//����Ҫ�к���ʵ����
//	window = screen(66, 77);//����Ĭ��ʵ�������λ�ã�Ĭ��ֻ��ʡ��β��ʵ�Σ�ͷ��������ֱ��ʡ����дβ���β�
//	window = screen(88, 99, 'f');
	const string s1 = "hello";
	const string s2 = "world";
	string s3, s4;

	//cin >> s3 >> s4;
	shorterString(s1, s2);
	shorterString(s3, s4);
	vector<int>ceshi = { 1, 2, 3, 4, 5, 6, 6, 7, 5};
	print(ceshi);
	string s = "afadgsd";
	string ls1 = "asfdfgxbfghe";
	process(s,ls1);
	
	int j[] = { 2, 1, 3 };
	printl(j, 3);
	print(begin(j), end(j));//2
	print(j, end(j) - begin(j));//3
	
//	is_enpty(j);
	//return 0;
	system("pause");
}