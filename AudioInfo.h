#ifndef AUDIOINFO_H
#define AUDIOINFO_H

#include<iostream>
#include<string>

#include "MediaInfo.h"

using namespace std;

class AudioInfo : public MediaInfo {
	string singer;
public:
	AudioInfo();
	AudioInfo(string title, string singer);
	virtual string GetTitle();
	string GetSinger();
};
#endif