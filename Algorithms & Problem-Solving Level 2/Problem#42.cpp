/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#42.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/28 10:56:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/28 11:07:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

bool tt_ispunct(char letter)
{
	return (letter >= 33 && letter <= 47 || letter >= 58 && letter <= 64 || letter >= 91 && letter <= 96 || letter >= 123 && letter <= 126);
}

string tt_rem_pucnt(string str)
{
	int i = 0;
	string word = "";
	while(i < str.size())
	{
		if(!tt_ispunct(str[i]))
			word += str[i];
		i++;
	}
	return word;
}
int main()
{
    string tests[10] = {
        "Hello, world!",
        "C++ is great!!!",
        "No punctuation here",
        "1234!@#$Test",
        "Wait... what?",
        "Remove - all - dashes.",
        "Quotes: \"Hello\" and 'bye'.",
        "Brackets (test) [check] {ok}",
        "Slash / backslash \\ test.",
        "Mix3d: T3xt, w1th numb3rs & punct!"
    };

    for (int i = 0; i < 10; i++)
    {
        cout << "Original: " << tests[i] << endl;
        cout << "Cleaned : " << tt_rem_pucnt(tests[i]) << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
