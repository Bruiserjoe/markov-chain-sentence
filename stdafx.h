// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


#include <SDKDDKVer.h>
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <time.h>
#include <tchar.h>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
class main1 {
public:
	int loop1();
	int frick;
	int spawn;
	int attsize;
	int lamo;
	int drownin;
	std::ifstream m_file;
	std::vector<int> wordlist;
	std::string att;
	std::string lastword;
	std::vector<std::string> textlines;
	std::vector<std::string> attachedword;
	int genattached[1000];
private:
};



// TODO: reference additional headers your program requires here
