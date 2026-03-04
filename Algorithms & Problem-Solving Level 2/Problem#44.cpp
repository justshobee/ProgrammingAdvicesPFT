/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#44.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/03 11:47:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/04 09:08:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

struct stClinetInfo
{
	string AccNumber = "";
	string PinCode = "";
	string NameCl = "";
	string PhoneCl = "";
	double AccBlance;
};
bool CompCases(string str,string sep,int pos)
{
	int i = 0;
	while(i < sep.size())
	{
		if(str[pos + i] != sep[i])
			return false;
		i++;
	}
	return true;
}
vector <string> tt_splite(string str,string sep)
{
	int lensep = sep.size();
	int lenstr = str.size();

	vector <string> record;
	int i = 0;
	string word = "";
	while(i < lenstr)
	{
		if(str[i] == sep[0])
		{
			if(CompCases(str,sep,i))
			{
				record.push_back(word);
				i += 3;
				word = "";
			}

		}else
		{
			word +=str[i];
		}
		i++;
	}
	if(word != "")
		record.push_back(word);

	return record;
}
int ConvertstrTonbr(string str)
{
	int i = 0;
	int oldnbr = 0;
	while(i < str.size())
	{
		oldnbr = (str[i] - '0') + oldnbr * 10;
		i++;
	}
	return oldnbr;
}
stClinetInfo ConvToStruct(vector<string> record)
{
	stClinetInfo info;

	info.AccNumber = record[0];
	info.PinCode = record[1];
	info.NameCl = record[2];
	info.PhoneCl = record[3];
	info.AccBlance = ConvertstrTonbr(record[4]);

	return info;
}

int main()
{
	string recordLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270";
	string sep = "#//#";

	vector <string> record = tt_splite(recordLine,sep);
	stClinetInfo info = ConvToStruct(record);

	cout << "Accout Number   : " << info.AccNumber << endl
		 << "Pin Code        : " << info.PinCode   << endl
		 << "Name            : " << info.NameCl    << endl
		 << "Phone           : " << info.PhoneCl   << endl
		 << "Account Balance : " << info.AccBlance << endl;

	return 0;
}
