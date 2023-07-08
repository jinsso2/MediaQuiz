#include "MovieInfo.h"

MovieInfo::MovieInfo() {
	quotes = "";
	mediaType = EMediaType::MOVIE;
}

MovieInfo::MovieInfo(string title, string quotes) {
	this->quotes = quotes;
	this->title = title;
	mediaType = EMediaType::MOVIE;
}

string MovieInfo::GetTitle() {
	return title;
}

string MovieInfo::GetQuotes() {
	return quotes;
}