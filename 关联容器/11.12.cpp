#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include <algorithm>
#include<utility>
#include<map>

using namespace std;
void remove_author(multimap<string, string>&book, const string &author)
{
	auto pos = book.equal_range(author);
	if (pos.first == pos.second)
	{
		cout << "��û��" << "�������" << endl;
	}
	else
		book.erase(pos.first, pos.second);
}
void print_books(multimap<string, string>&book)
{
	cout << "��ǰ��Ŀ�У�" << endl;
	for (auto v:book)
	{
		cout << v.first << ",��" << v.second << "��" << endl;
	}
	cout << endl;
}
int main(int argc, char **argv)
{
	/*vector<pair<string, int>>data;//pair��vector
	string words;
	int v;
	while (cin>>words&&cin>>v)//����������cin�������á���Ҫ��ȡ�ļ�����������Ӧ�ð����ļ����ķ�ʽ��ȡ��
	{
		data.push_back(pair<string, int>(words, v));

	}
	for (auto v:data)
	{
		cout << v.first <<"  "<< v.second << endl;
	}
*/

	multimap<string, string>books;
	books.insert({ "Barth,Jhon", "Sot-Weed Factor" });
	books.insert({ "��ӹ", "Ц������" });
	books.insert({ "����", "�������ɴ�" });
	print_books(books);
	remove_author(books,"����");
	print_books(books);
	system("pause");
	return 0;
}