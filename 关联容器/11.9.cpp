/*
//����һ��map����������һ���кŵ�list������list�б��浥�ʳ��ֵ��к�
//map<string,list<int>>word_lineno
#include <iostream>
#include<fstream>
#include<sstream>
#include <map>
#include<list>
#include <string>
#include <algorithm>
using namespace std;
string &tran(string &s)
{
	for (int p = 0; p < s.size(); ++p)
	{
		if (s[p] >= 'A'&&s[p] <= 'Z')
		{
			s[p] -= ('A' - 'a');
		}
		else if (s[p] == ',' || s[p] == '.')
		{
			s.erase(p, 1);
		}
	}
	return s;
}
int main(int argc, char **argv)
{
	map<string, list<int>>word_lineno;
	string line;
	string word;
	int leneno = 0;
	while (getline(cin, line))
	{
		leneno++;
		while (cin>>word)
		{
			tran(word);
			word_lineno[word].push_back(leneno);
		}
		cin.clear();
	}
	for (const auto &w:word_lineno)
	{
		cout << w.first <<"�����У�";
		for (auto v:w.second)
		{
			cout << v << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/