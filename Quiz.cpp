#include "Quiz.h"
#include "MovieInfo.h"
#include "AudioInfo.h"

Quiz::Quiz() {
	mediaVector.clear();
	MediaInfo* mediaInfo[6] = {
		new MovieInfo("신세계", "죽기 딱 좋은 날씨네"),
		new MovieInfo("타짜", "묻고 더블로 가"),
		new MovieInfo("명량", "전하, 신에게는 아직 12척의 배가 남아있사옵니다"),
		new AudioInfo("리무진", "비오"),
		new AudioInfo("사건의 지평선", "윤하"),
		new AudioInfo("흔들리는 꽃들 속 에서 네 샴푸 향이 느껴진 거야", "장범준")
	};

	for (int i = 0; i < 6; i++) {
		InitVector(mediaInfo[i]);
	}
}

void Quiz::InitVector(MediaInfo*& mediaInfo) {
	mediaVector.push_back(mediaInfo);
}

void Quiz::Play() {
	srand((unsigned int)time(NULL));

	string userInput;

	int randomIndex = rand() % mediaVector.size();

	if (mediaVector[randomIndex]->mediaType == EMediaType::AUDIO)
		cout << "제목 : " << mediaVector[randomIndex]->GetTitle() << " / 노래를 부른 가수는?" << endl;

	else if (mediaVector[randomIndex]->mediaType == EMediaType::MOVIE)
		cout << "명대사 : " << static_cast<MovieInfo*>(mediaVector[randomIndex])->GetQuotes() << " / 영화의 제목은?" << endl;
	else
		cout << "에러!";

	getline(cin, userInput);

	if (mediaVector[randomIndex]->mediaType == EMediaType::AUDIO &&
		static_cast<AudioInfo*>(mediaVector[randomIndex])->GetSinger() == userInput)
		cout << "정답!" << endl;

	else if (mediaVector[randomIndex]->mediaType == EMediaType::MOVIE &&
		mediaVector[randomIndex]->GetTitle() == userInput)
		cout << "정답!" << endl;

	else
		cout << "오답!" << endl;
}

