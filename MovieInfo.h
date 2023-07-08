#ifndef MOVIEINFO_H
#define MOVIEINFO_H

#include<iostream>
#include<string>

#include "MediaInfo.h"
#include "AudioInfo.h"


using namespace std;

class MovieInfo : public MediaInfo{
	string quotes;
public:
	MovieInfo();
	MovieInfo(string title, string quotes);
	virtual string GetTitle();
	string GetQuotes();
};
#endif