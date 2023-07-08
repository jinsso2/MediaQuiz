#include "MediaInfo.h"

MediaInfo::MediaInfo() {
	title = "";
}

MediaInfo::MediaInfo(string title) {
	this->title = title;
}

string MediaInfo::GetTitle() {
	return title;
}