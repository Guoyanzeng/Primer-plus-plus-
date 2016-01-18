#ifndef SALAS_DATE
#define SALAS_DATE
#include <iostream>
#include <string>
#include "Window_mgr.h"

class Screen;
class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex i);
	Window_mgr() = default;
	//////////////////////////////////////////////////////////////////////////
	//1>f:\nowworkcome\c++primer\classtest.cpp\class.h(37): error C2027: ʹ����δ�������͡�Window_mgr��
	//1 > f:\nowworkcome\c++primer\classtest.cpp\class.h(36) : �μ���Window_mgr��������
	//1 > f:\nowworkcome\c++primer\classtest.cpp\class.h(37) : error C2061 : �﷨���� : ��ʶ����ScreenIndex��
	//1 > Class.cpp                                                       //����Ȼ�޷����⣻�Ҿ������Զ���Ҫ����ͬһ�ļ�����
	//////////////////////////////////////////////////////////////////////////
private:
	std::vector<Screen>screens{};// Screen(24, 80, ' ')�����ﲻ�ܷ�����������﷨���󣬾�̬��Ա��ʼ�����ڹ��캯�������ʼ��

};
class Person
{
	private:
		mutable int a;
//		static constexpr double data_db = 1;
		std::string Pername;	
		std::string PerAddr;
	public:	
		Person() = default;
		Person(const std::string setname, const std::string setaddr) :Pername(setname), PerAddr(setaddr) {}
		std::string getname() const { return Pername; }
		std::string getAddr() const { return  this ->PerAddr; }//��ʽthis��ʽ�滻
		inline std::string setPerName(std::string setname) { Pername = setname; }
		inline void showPerDate() { std::cout << Pername << PerAddr; }
		friend int readline(const std::string name);
		friend std::istream &read(std::istream&, Person&);
		friend std::ostream &write(std::ostream&, Person&);//��Ԫ�����Ԫ�������ƻ���ķ�װ��;
};
	int readline(const std::string name);
	std::istream &read(std::istream&, Person&);
	std::ostream &write(std::ostream&, Person&);
class Perfriend
{
private:
	int age;
	int height;
	int money;
public:
	Perfriend(int Age, int Height, int Mon) :age(Age), money(age) {}//��Ȼ������ʲô������Ϣ���ֵ��ǻ��ǻ����һЩ�����͵Ĵ���

};
 

class Screen
{
	friend class Window_mgr;
	friend void Window_mgr::clear(ScreenIndex i);
	public:
		
		using pos = std::string::size_type;//���ͱ���
		typedef std::string::size_type pos;
		Screen&set(char);
		Screen&set(pos, pos, char);
		Screen() = default;
		Screen(pos ht, pos wd, char c) :height(ht) ,weight(wd), contents(ht *wd, c) {}//��ȡ��괦���ַ�
		char get()const { return contents[cursor]; }	//��ʽ����
		inline char get(pos ht, pos wd)const;			//��ʽ����
		Screen &move(pos r, pos s);						//����֮����Ϊ��������
		Screen &display(std::ostream &os) 
		{
			do_display(os);
			return *this;
		}
		const Screen &display(std::ostream &os)const
		{
			do_display(os);
			return *this;
		}
	private:
		pos cursor = 0;
		pos height = 0, weight = 0;
		std::string contents;
		void do_display(std::ostream &os)const
		{
			os << contents;
		}
};
typedef double Money;
class Accoount
{
public:
	Money blance() { return bal;}
private:
	//typedef double Money;//���󣬲������¶���Money����Ȼ��vs2013�б���ͨ�������Ǻ�ʽ�����Ͻ��Ĵ��롣
	Money bal;
}; 
//int weight;
//class Glass
//{
//public:
//	typedef std::string :: size_type poos;
//	void setheight(poos);
//	poos weight = 0;
//
//
//};
//Glass::poos verify(Glass::poos);
//void Glass::setheight(poos var)
//{
//	//var ����
//	//
//	this->weight = verify(var);
//};



//////////////////////////////////////////////////////////////////////////
//ί�й��캯��
//////////////////////////////////////////////////////////////////////////
class Sales_date
{
public:
	Sales_date(std::string s,unsigned cnt,double pries):
		bookNo(s), unit_sold(cnt), revenue(cnt*pries) { }
	Sales_date() :Sales_date(" ", 0, 0);
	Sales_date(std::string s) :Sales_date(s, 0, 0);
	Sales_date(std::istream &is) :Sales_date() { read(is, *this); }//ί�й��캯���������й��캯���Ļ�����ʹ�ô˹��캯�����Լ�����Ҳ����һ�����캯��u
private:
	std::string bookNo;
	unsigned unit_sold;
	double revenue;
};
#endif
