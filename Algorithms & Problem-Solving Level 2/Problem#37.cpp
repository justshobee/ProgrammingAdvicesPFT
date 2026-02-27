/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#37.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/08 09:19:43 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/27 21:58:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// welcome to lose boise hermanos // sep = space
bool isSpace(char lett)
{
	return (lett == ' ' || lett == '\t' || lett == '\n' || lett == '\v' );
}

vector<string> splitWord(string str,char sep)
{
	vector<string> vString;
	int i = 0;
	string word = "";
	bool inword = false;
	while(i < str.size())
	{
		if(str[i] != sep)
			word+=str[i];
		else
		{
			if(word != "")
			{
				vString.push_back(word);
				word = "";
			}
		}
		i++;
	}
	if(word != "")
		vString.push_back(word);
	return vString;
}

int main()
{
	string str;
	char sep;
	cout << "Enter a Sentence : ";
	getline(cin,str);
	cout << "Enter a separator : ";
	cin >> sep;
	vector vString = splitWord(str,sep);
	for(string str : vString)
		cout << str << endl;

	return 0;
}
