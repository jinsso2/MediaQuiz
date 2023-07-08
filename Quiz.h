#ifndef QUIZ_H
#define QUIZ_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "MediaInfo.h"


using namespace std;

class Quiz {
	vector<MediaInfo*> mediaVector;
public:
	Quiz();
	void InitVector(MediaInfo*& mediaInfo);
	void Play();
};

#endif