/*
#include<iostream>
#include <vector>
#include<string>
#include <list>
#include <deque>
#include<forward_list>
#include <cstdlib>
#include <process.h>
using namespace std;
int main(int argc, char**argv)
{
	list<string>slist;
	slist.insert(slist.begin(),"10");
	slist.insert(slist.end(), "12");
	vector<string>Vstring{ "hello", "aff", "teny" };
	Vstring.insert(Vstring.end(), slist.begin(), slist.end());
	//Vstring.insert(Vstring.begin(), { "asasf", "assdf" });//������ʾ��Ч�ĵ�������Χ
	vector<string>::iterator it = Vstring.begin();
	cout << *it<<endl;
	//////////////////////////////////////////////////////////////////////////
	int som_val = 1;
	vector<int>iv = { 1, 1, 1, 1, 1, 1, 1, 1 };
	vector<int> ::iterator Viter = iv.begin();
	int org_size = iv.size(), new_ele = 0;
	while (Viter!=(iv.begin()+org_size/2+new_ele))
		if (*Viter == som_val)
		{
			Viter=iv.insert(Viter, 2 * som_val);//������vector���������ݺ󣬻����ţ�����ԭ�е�����ʧЧ����ʱ���Ե������Σ�ʹ���Ƶ���һ����λ����
			Viter++;
			Viter++;//Ҫʹ��Viter++;�����ò����󷵻ص�iteratorֵ��������ִֻ��iv.insert();����
		//	new_ele++;//��Ϊ���λ
		}
	else
		Viter++;
	//////////////////////////////////////////////////////////////////////////
	//back��������forward_list
	//at���±����ֻ������string vector deque array
	//	cout << iv.at[4];
	cout << iv.at(4); 
	cout << iv[3];
	cout<<iv.front();
	//////////////////////////////////////////////////////////////////////////
	vector<int>nullvector;
	//nullvector.at(0);
	//cout << nullvector[0];
	//����һ������������front��back����ʹ��һ��Խ����±�һ�� ����һ�����صĳ�����ƴ������������׳��쳣


	//////////////////////////////////////////////////////////////////////////
	


	
	list<string>lst;
	auto iter = lst.begin();
	string word;
	while (cin>>word)
	{
		iter = lst.insert(iter, word);
	}
	for (auto it = lst.cbegin(); it != lst.end(); it++)
	{
		cout << *it << endl;
	}

	cin.clear();//��cin��״̬���Ҫ��ȻcinĬ������eof��Ϊ��Чλ


	//////////////////////////////////////////////////////////////////////////deque
	deque<string>Deque;
	string Dword;
	while (cin >> Dword)
		Deque.push_back(Dword);
	for (auto it = Dword.begin(); it != Dword.end();it++)
	{
		cout << *it << endl;
	}
	cin.clear();
	
//////////////////////////////////////////////////////////////////////////list
	list<string>iList;
	string Lword;
	while (cin >> Lword)
		iList.push_back(Lword);
	for (auto it = iList.cbegin(); it != iList.end(); it++)
	{
		cout << *it << endl;
	}
	cin.clear();
	system("pause");

}
*/
