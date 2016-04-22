#ifndef LEXER
#define LEXER

#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <set>
using namespace std;
typedef pair<int, string> PIS;
const int MAXLEN = 10000;
const int LINEMAXLEN = 255;
const int WORDMAXLEN = 15;
const int PRECISION = 15;

extern string errmsg;
extern vector<PIS> vTable;

bool lineAnalyse( string &line, int &colNo );

#endif // LEXER
