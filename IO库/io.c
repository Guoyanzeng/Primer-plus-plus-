//#include<iostream>
//#include <cstdlib>
//#include <process.h>
//#include <stdexcept>
//#include<fstream>
//#include <vector>
//#include <string>
//using namespace std;
//istream & f(istream &in)
//{
//	int v;
//	while (in >> v, !in.eof())
//	{
//		if (in.bad())
//			throw runtime_error("IO������");
//		if (in.fail())
//		{
//			cerr << "���ݴ���������" << endl;
//			in.clear();
//			in.ignore(100, '\n');
//			continue;
//		}
//		cout << v << endl;
//	}
//	in.clear();
//	return in;
//}
//
//int main1(int argc, char **argv)
//{
//	cout << "hi" << ends;//�ո� ��ˢ��
//	cout << "hi" << endl;//�س���ˢ��
//	cout << "hi" << flush;//�޿ո� ˢ�»�����������Ӷ����ַ�
//	//auto &old_state = cin.rdstate;
//	//cin.clear();
//	//cin.clear(cin.rdstate()&~cin.failbit&~cin.badbit);
//	////process_input(cin);
//	//cin.setstate(old_state);
//
//	f(cin);
//
//	system("pause");
//	return 0;
//}
//int main2()
//{
//	ifstream in("data");
//	if (!in)
//	{
//		cerr << "�޷��������ļ�" << endl;
//		system("pause");
//		return -1;
//	}
//	string line;
//	vector<string>words;
//	while (in>>line)//in>>line �����ո��д�� getline(in>>line)�Ƕ�ȡһ��
//
//	{
//		words.push_back(line);
//	}
//	in.close();
//	vector<string>::const_iterator it = words.begin();
//	while (it!=words.end())
//	{
//		cout << *it++ << endl;
//		cout << unitbuf;
//
//	}
//	system("pause");
//	return 0;
//}
//int main3()
//{
//	ifstream in("data",ostream::app);//open the file
//	if (!in)
//	{
//		cerr << "we can't open the file" << endl;
//		return -1;
//	}
//	string line;
//	vector<string>words;
//	while (getline(in, line))
//		words.push_back(line);
//	in.close();
//	vector<string>::const_iterator it = words.begin();
//	while (it!=words.end())
//	{
//		cout << *it++ << endl;
//	}
//	system("pause");
//	return 0;
//
//}
