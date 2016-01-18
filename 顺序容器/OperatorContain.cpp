/*
#include <iostream>
#include<vector>
#include <list>
#include <forward_list>
#include <stdlib.h>
#include <deque>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////
//�������ڲ���s1,����s2���뵽s1����
void test_and_insert(forward_list<string>&sflst, const string &s1, const string &s2)
{
	auto prev = sflst.before_begin();
	auto fbengin = sflst.begin();
	bool inserted = false;
	while (fbengin != sflst.end())
		if (*fbengin == s1)
		{
			fbengin = sflst.insert_after(fbengin, s2);
			inserted = true;
		}
		else
		{
			prev = fbengin;
			fbengin++;
		}
	if (!inserted)
	{
		sflst.insert_after(prev, s2);
	}
}
int main(int argc, char **argv)
{
	////////////////////////Delete member in the contain
	list<int >lst{ 1, 2, 3, 4, 4, 3, 2, 35, 76, 43, 1 };
	auto it = lst.begin();
	while (it != lst.end())
	{
		cout << *it<< " ";
		if (*it % 2)
			it = lst.erase(it);
		else
			++it;
	}
	it = lst.begin();
	cout << endl;
	while (it != lst.end())
	{
		cout << *it++<< " ";
	
	}
	cout << endl;//ɾ������Ԫ�ؽ�����
	//////////////////////////////////////////////////////////////////////////

	int ia[] = { 1, 2, 3, 4, 5, 5, 6, 23, 7, 7 };
	vector<int>iv;
	list<int>il;
	iv.assign(ia, ia + 10);//���ݿ���
	il.assign(ia, ia + 10);


	auto iiv = iv.begin();
	while (iiv != iv.end())
		if (!(*iiv & 1))
			iiv = iv.erase(iiv);
		else
			iiv++;


	auto iil = il.begin();
	while (iil != il.end())
		if (*iil & 1)
			iil = il.erase(iil);
		else
			iil++;
	for (iiv = iv.begin(); iiv != iv.end(); iiv++)
		cout << *iiv << "  ";
	cout << endl;
	for (iil = il.begin(); iil != il.end(); iil++)
		cout << *iil << " ";
	cout << endl;//ɾ����ż��
	//////////////////////////////////////////////////////////////////////////
	//forward_list �������ɾ������
	forward_list<int>forlist{ 1, 2, 3, 5, 6, 7, 8, 5, 3, 56, 32, 65, 324, 6 };
	auto prev = forlist.before_begin();
	auto fbegin = forlist.begin();
	while (fbegin != forlist.end())
		if (!(*fbegin % 2))//���Ƿ�Ϊż������ʹ�� (!(*fbegin&1))
			fbegin=forlist.erase_after(prev);
		else
		{
			prev = fbegin;
			fbegin++;
		}
	fbegin = forlist.begin();
	while (fbegin != forlist.end())
		cout << *fbegin++ << " ";
	cout << endl;
	//////////////////////////////////////////////////////////////////////////
	//���ú���test_and_insert
	forward_list<string>flist{ "hello", "myheart", "dear", "hai" };
	test_and_insert(flist, "hello", "heihei1");
	auto fllist = flist.begin();
	cout << *(++fllist) << endl;

	//////////////////////////////////////////////////////////////////////////
	//list��forward_list�����ɾ���Ͳ��������Ҫ����ʽ�洢
	list<int>ilst{ 23, 45, 2, 3, 21, 45, 23, 234, 433, 5, 6, 76, 4, 2, 2, 5 };
	auto curr = ilst.begin();
	while (curr!=ilst.end())
	{
		if (*curr & 1)
		{
			curr = ilst.insert(curr,*curr);
			curr++;
			curr++;//�����ر�ע�⣬Ҫ�����Σ�һ���ǵ������Ԫ��λ�ã�һ���ǵ���һ��

		}
		else
			curr = ilst.erase(curr);
	}
	for (curr = ilst.begin(); curr != ilst.end();curr++)
	{
		cout << *curr << " ";
	}
	cout << endl;
	//////////////////////////////////////////////////////////////////////////
	//vector�����������
	vector<int> words;
	for (int i = 0; i < 258;++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//316 258
	cout << words.capacity() -words.size() << endl;//58
	words={};
	for (int i = 0; i <258; ++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//316 258
	cout << words.capacity() - words.size() << endl;//58
	for (int i = 0; i < 258; ++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//711 517
	cout << words.capacity()- words.size() << endl;//194
	for (int i = 0; i <258; ++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//1066 775
	cout << words.capacity()-words.size() << endl;//291
	//�ܽ��ǳɱ����������Ŀռ䣬����Ҳ����Щ�����





	system("pause");

}*/