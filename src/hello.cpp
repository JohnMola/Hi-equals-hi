#include <string>
#include <iostream>
#include <cctype>
#include "hello.hpp"

using namespace std;

int strcmp_case_insensitive(string s1, string s2)
{
    int num = 0;

    if (s1.length() == 0)
    {
        return 0 - s2[1];
    }
    if (s2.length() == 0)
    {
        return s1[1] - 0;
    }

    for (char &c : s1)
    {
        c = tolower((char)c);
    }

    for (char &c : s2)
    {
        c = tolower((char)c);
    }

    bool check = true;

    if (s1.length() == s2.length())
    {

        for (int i = 0; i < s1.length(); i++)
        {

            if (s1[i] == s2[i])
            {

                num = 0;
            }
            else
            {
                num = s1[i] - s2[i];
                return num;
            }
        }
    }
    else if (s1.length() > s2.length())
    {

        for (int i = 0; i < s2.length(); i++)
        {
            if (!(s1[i] == s2[i]))
            {
                num = s1[i] - s2[i];
                return num;
            }
            else
            {
                num = s1[i] - 0;
            }
        }
    }
    else if (s1.length() < s2.length())
    {

        for (int i = 0; i < s1.length(); i++)
        {
            if (!(s1[i] == s2[i]))
            {
                num = s1[i] - s2[i];
                return num;
            }
            else
            {
                num = 0 - s2[i];
            }
        }
    }

    return num;
}