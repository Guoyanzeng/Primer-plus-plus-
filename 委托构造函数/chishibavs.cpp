
#include <iostream>
#include<string>
using namespace  std;
class Sales_date
{
	friend std::istream &read(std::istream& is, Sales_date&item);
	friend std::ostream&write(std::ostream&os, const Sales_date&item);

public:
	Sales_date(const string &book, unsigned num, double sellp, double salep)
		:bookNo(book), unit_sold(num), sellingprice(sellp), saleprice(salep)
	{
		if (sellingprice)
			discount = saleprice / sellingprice;
		cout << "�ù��캯��������ţ���������ԭ�ۡ�ʵ������ĸ���Ϣ" << endl;
	}
	Sales_date() :Sales_date("", 0.0, 0.0, 0.0)
	{
		cout << "�ù��캯���������κ���Ϣ" << endl;
	}
	Sales_date(const string &book) :Sales_date(book, 0, 0, 0)
	{
		cout << "�ù��캯������������Ϣ" << endl;
	}
	Sales_date(std::istream &is) :Sales_date()
	{
		read(is, *this);
		cout << "�ù��캯�������û��������Ϣ" << endl;
	}
	std::istream&read(std::istream&is, Sales_date&item)
	{
		is >> item.bookNo >> item.unit_sold >> item.sellingprice >> item.saleprice;
		return is;
	}
	std::ostream&write(std::ostream&os, Sales_date&item)
	{
		os << item.bookNo << item.unit_sold << item.sellingprice << item.saleprice;
		return os;
	}
private:
	std::string bookNo;
	unsigned unit_sold = 0;
	double sellingprice = 0.0;
	double saleprice = 0.0;
	double discount = 0.0;

};

int main()
{
	Sales_date first("asas-sdgs-gds-gdf-g", 80, 124, 46);
	Sales_date second;
	Sales_date third("981293-235-4-5-32");
	Sales_date last(cin);
	system("pause");
	return 0;
}

