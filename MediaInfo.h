	#ifndef MEDIAINFO_H
	#define MEDIAINFO_H

	#include<iostream>
	#include<string>
	using namespace std;

	enum EMediaType
	{
		AUDIO = 1,
		MOVIE
	};

	class MediaInfo {
	protected:
		string title;
	public:
		EMediaType mediaType;
		MediaInfo();
		MediaInfo(string title);
		virtual string GetTitle();
	};
	#endif