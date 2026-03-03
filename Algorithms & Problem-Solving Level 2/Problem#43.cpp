/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#43.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/03 10:43:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/03 13:59:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct stInfoClient
{
	string AccNumber = "";
	string PinCode = "";
	string NameCl = "";
	string PhoneCl = "";
	double AccBalance;
};

stInfoClient ReadInfoClient()
{
	stInfoClient info;

	cout << "Please Enter Client Data : \n\n";
	cout << "Enter Account Number : ";
	cin >> info.AccNumber;
	cout << "Enter Pin code: ";
	cin >> info.PinCode;
	cin.ignore();
	cout << "Enter Name Client : ";
	getline(cin,info.NameCl);
	cout << "Enter Phone Client : ";
	cin >> info.PhoneCl;
	cout << "Enter Account Balance : ";
	cin >> info.AccBalance;

	return info;
}
void swap(char &a,char &b)
{
	char tmp;
	tmp = a;
	a = b;
	b = tmp;
}
string ReverseStr(string str)
{
	int i = 0;
	int len = str.size();
	while(i < len / 2)
	{
		swap(str[i],str[len-i-1]);
		i++;
	}
	return str;
}
string Convertnbrtostr(int number)
{
	string word ="";
	int rem = 0;
	while(number != 0)
	{
		rem = number % 10;
		number = number / 10;
		char letter = rem + '0';
		word += letter;
	}
	string str = ReverseStr(word);
	return str;
}
string ConvertToLine(stInfoClient info,string sep = "#//#")
{
	string RecordLine = "";

	RecordLine = info.AccNumber + sep;
	RecordLine += info.PinCode + sep;
	RecordLine += info.NameCl + sep;
	RecordLine += info.PhoneCl + sep;
	RecordLine += Convertnbrtostr(info.AccBalance);

	return RecordLine;
}

int main()
{
	stInfoClient infoClient = ReadInfoClient();

	cout << ConvertToLine(infoClient);
	return 0;
}
