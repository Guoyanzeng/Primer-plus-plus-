/*
#include<iostream>
#include<string>
#include <vector>
using namespace std;


void replace_string(string&s, const string &oldVal, const string &newVal)
{
	auto l = oldVal.size();
	if (!l)
		return;//��ʾҪ���ҵ��ַ���Ϊ��
	auto iter = s.begin();
	while (iter <= s.end() - 1)
	{
		auto iter1 = iter;
		auto iter2 = oldVal.begin();
		while (iter2 != oldVal.end() && *iter1 == *iter2)
		{
			iter1++;
			iter2++;
		}
		if (iter2 == oldVal.end())
		{
			iter = s.erase(iter, iter1);//�ɺ���ǰ�������
			if (newVal.size())
			{
				iter2 = newVal.end();
				do
				{
					iter2--;
					iter2 = s.insert(iter, *iter2);
				} while (iter2 > newVal.begin());
			}
			iter += newVal.size();
		}
		else
			iter++;
	}


}




int main(int argc, char **argv)
{
	//////////////////////////////////////////////////////////////////////////
	//string����
	const char *cp = "Hello world!!!!";
	char noNuLL[] = { 'H', 'i' };
	string s1(cp);
	string s2(noNuLL, 2);
	string s3(noNuLL);//�����ַ�����Ҫ��/0Ϊ������
	string s4(cp + 6, 5);
	string s5(s1, 6, 5);
	string p("Helo World!!!");
	string p2 = p.substr(0, 5);
	string p3 = p.substr(5);
	string p4 = p.substr(6, 11);
	cout << p << endl;
	cout << p2 << endl;
	cout << p3 << endl;
	cout << p4 << endl;
	//string p5 = p.substr(16);//�ַ�������Խ�磬�׳��쳣
	//////////////////////////////////////////////////////////////////////////
	//9.41
	vector<char>vc{ 'g', 'f', 's', 'b', 'a' };
	string s(vc.data(), vc.size());
	cout << s<<endl;
	void input_string(string&s);
	
	

	system("pause");
}
//////////////////////////////////////////////////////////////////////////
//��Ч�Ĵ���̬������string
//�������Ĺ����о�ֱ�Ӷ�������Ӧ���ǵģ���Ȼ������ʵ��Ҫ���뵫���������˷Ѵ������½��ļ���ʱ�䣬��ʱ��С���ı��༭�����Եú���Ҫ�ˣ�������ѡ�����ӷ�׵�vs2013
	void input_string(string&s)
	{
		s.reserve(100);
		char c;
		while (cin >> c)
			s.push_back(c);
	}*/