/*
//////////////////////////////////////////////////////////////////////////
//���ļ���Ҫ������iostream��������Ӧ��
#include<iostream>
#include<vector>
#include <istream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;
int main(int argc, char ** argv)
{
	//����������argc��argv������Լ�¼������ļ����Ӷ����ļ����в��������������Ϊ���ô�����������ɼ�������ʹ��ֱ�Ӷ��ļ����������������������½��в������ļ���ֱ��Ĭ�ϡ�
	ifstream  openedfile("xujjian.txt");
	ofstream outfile1("xujian1.txt");//�ļ�Ĭ��ģʽ�ǲ��������½����ļ��������ڵĻ���ᷢ������ĿĿ¼�´����˴��ļ�
	ofstream outfile2("xujian2.txt");
	if (!openedfile)
	{
		cout << "�������ļ�ʧ��" << endl;
		exit(1);
	}
	if (!outfile1)//���������һ���ļ�������������ļ������ڣ����ʧ�ܣ���Ҫ�����������֤�����������ļ�ʧ�ܵĻ��������½����ļ�
	{
		cout << "��������ļ�1ʧ��" << endl;
	
	}
	if (!outfile2)
	{
		cout << "�򿪶�������ļ�2ʧ��" << endl;
		
	}
	istream_iterator<int>eof, in_iter(openedfile);
	ostream_iterator<int>out_iter1(outfile1," ");
	ostream_iterator<int>out_iter2(outfile2, "\n ");//�ڶ���������֤û���һ�����ݺ���ķָ���
	while (in_iter != eof)//��֤������ļ���ż���ָ��
	{
		if (*in_iter & 1)
		{
			*out_iter1++ = *in_iter;
		}
		else
			*out_iter2++ = *in_iter;
		in_iter++;
	}
	system("pause");

}*/