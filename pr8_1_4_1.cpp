#include <iostream>
#include <string>
using namespace std;
int CountB(const string s)
{
	int b = 0;
	size_t pos = 0;
	while ((pos = s.find('B', pos)) != -1)
	{
		pos++;
		b++;
	}
	return b;
}
int CountA(const string s)
{
	int a = 0;
	size_t pos = 0;
	while ((pos = s.find('A', pos)) != -1)
	{
		pos++;
		a++;
	}
	return a;
}
int CountS(const string s)
{
	int es = 0;
	size_t pos = 0;
	while ((pos = s.find('S', pos)) != -1)
	{
		pos++;
		es++;
	}
	return es;
}
int CountI(const string s)
{
	int i = 0;
	size_t pos = 0;
	while ((pos = s.find('I', pos)) != -1)
	{
		pos++;
		i++;
	}
	return i;
}
int CountC(const string s)
{
	int c = 0;
	size_t pos = 0;
	while ((pos = s.find('C', pos)) != -1)
	{
		pos++;
		c++;
	}
	return c;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('B', pos)) != -1) {
		if (s[pos + 1] == 'A')
		{
			if (s[pos + 2] == 'S')
			{
				if (s[pos + 3] == 'I')
				{
					if (s[pos + 4] == 'C')
					{
						s.replace(pos, 5, "Delphi");
					}
					else {
						break;
					}
				}
				else {
					break;
				}
			}
			else {
				break;
			}
		}
		else {
			break;
		}
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << CountB(str) << " B " << CountA(str) << " A " << CountS(str) << " S " << CountI(str) << " I " << CountC(str) << " C " << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}