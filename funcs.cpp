#include <iostream>
#include "funcs.h"
#include <vector>
#include <math.h>
#include <stdio.h>
#include <fstream>

// add functions here


int charIndex(char o)
{
    int ascii = (int) o;
    if((isupper(o)))
    {
       ascii -= (int) 'A';
    }
    else
    {
        ascii -= (int)'a';
    }
    return ascii % 26;
}


char shiftChar(char o, int sh)
{
    int index;
    if(sh == 0 || !isalpha(o))
    {
        return o;
    }
    if (sh > 0)
    {
        int a;

        if(isupper(o))
        {
            a = (int) 'A';
        }
        else {
            a = (int) 'a';
        }
        index = (((int) o + sh - a) % 26) + a;
    }
    else
    {
        int z = isupper(o) ? (int) 'Z' : (int) 'z';
        index = (((int) o + sh - z) % 26) + z;
    }
    return (char) index;
}


std::string encryptCaesar(std::string text, int shift)
{
	std::string s = "";
	int i = -1;
	while (text[++i])
		s += shiftChar(text[i], shift);
	return s;
}

std::string decryptCaesar(std::string text, int shift)
{
        std::string r = "";
        int i = -1;
        while (text[++i])
                r += shiftChar(text[i], -shift);
        return r;
}