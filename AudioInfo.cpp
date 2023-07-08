#include "AudioInfo.h"

AudioInfo::AudioInfo() {
	singer = "";
	mediaType = EMediaType::AUDIO;
}

AudioInfo::AudioInfo(string title, string singer) {
	this->singer = singer;
	this->title = title;
	mediaType = EMediaType::AUDIO;
}

string AudioInfo::GetTitle() {
	return title;
}

string AudioInfo::GetSinger() {
	return singer;
}