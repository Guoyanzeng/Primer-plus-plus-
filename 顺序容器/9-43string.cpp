/*
#include <iostream>
#include<string>
#include<vector>
using namespace  std;
void replace_string(string &s, const string &oldVal, const string &newVal)//��ԭʼ���ַ������������жԱ��滻
{
	auto l = oldVal.size();
	if (!l)
		return;
	auto iter = s.begin();
	while (iter <= s.end() - 1)
	{
		auto iter1 = iter;
		auto iter2 = oldVal.begin();
		while (iter2 !=oldVal.end()&& *iter1==*iter2)
		{
			iter1++;
			iter2++;	
		}
		if (iter2 == oldVal.end())
		{
			iter = s.erase(iter, iter1);
			if (newVal.size())
			{
				iter2 == newVal.end();//���ִ���ֱ�ӱ���
				do 
				{
					iter2--;
					iter = s.insert(iter, *iter2);
				} while (iter2>newVal.begin());
			}
			iter += newVal.size();
		}
		else iter++;
	}
}

void replacestring(string&s, const string &oldVal, const string &newVal)//ֱ�����ñ�׼������ĺ��������ַ�������ؼ���string�Ĳ���
{
	int p = 0;
	while ((p=s.find(oldVal,p))!=string::npos)
	{
		s.replace(p, oldVal.size(), newVal);
		p += newVal.size();
	}
}


void name_string(string&name, const string &prefix, const string &suffix)//���õ����������в����β������
{
	name.insert(name.begin(), 1, ' ');
	name.insert(name.begin(), prefix.begin(), prefix.end());
	name.append(" ");
	name.append(suffix.begin(), suffix.end());
}
void namestring(string &name, const string&prefix, const string &suffix)//�����Ⱥ�λ�ý���string����
{
	name.insert(0, " ");
	name.insert(0, prefix);
	name.insert(name.size(), " ");
	name.insert(name.size(), suffix);

}
void find_char(string&s, const string&chars)//ֱ������find_first_of(s,chars)�������в��ҷ���ֵΪһ��string::npos������ֵ���з����ַ�����û�з���npos
{
	cout << "��" << s << "�в���" << chars << "���ַ�" << endl;
	string::size_type pos = 0;
	while ((pos = s.find_first_of(chars,pos))!=string::npos)
	{
		cout << "pos: " << pos<<",char: " << s[pos] << endl;
		pos++;
	}
}

void find_not_char(string&s, const string&chars)//ֱ������find_first_of(s,chars)�������в��ҷ���ֵΪһ��string::npos������ֵ���з����ַ�����û�з���npos
{
	cout << "��" << s << "�в��Ҳ���" << chars << "���ַ�" << endl;
	string::size_type pos = 0;
	while ((pos = s.find_first_not_of(chars, pos)) != string::npos)
	{
		cout << "pos: " << pos << ",char: " << s[pos] << endl;
		pos++;
	}
}
float SumStringInt(const vector<string> &sub)//����������ӣ���ǣ��������С������stoi(string)��int,Ҳ������stof(string)��float
{
	auto sum=0;
	for (auto iter = sub.begin(); iter != sub.end(); iter++)
		sum += stof(*iter);
	return sum;
}


int main(int argc, char **argv)
{

	string s = "tho thru  tho !";
	//replacestring(s, "thru", "through");
	//replace_string(s, "thru", "through");
	name_string(s, "nihao", "wobuhao");
	cout << s << endl;
	string p = "123sdv546dbjy64vs4";
	find_char(p, "1234567890");
	find_not_char(p, "1234567890");
	vector<string>sumint{"12","3456","+102","-129","+12"};
	cout << SumStringInt(sumint)<<endl;
	system("pause");
	return 0;
}*/