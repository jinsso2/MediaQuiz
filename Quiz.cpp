#include "Quiz.h"
#include "MovieInfo.h"
#include "AudioInfo.h"

Quiz::Quiz() {
	mediaVector.clear();
	MediaInfo* mediaInfo[6] = {
		new MovieInfo("�ż���", "�ױ� �� ���� ������"),
		new MovieInfo("Ÿ¥", "���� ����� ��"),
		new MovieInfo("��", "����, �ſ��Դ� ���� 12ô�� �谡 �����ֻ�ɴϴ�"),
		new AudioInfo("������", "���"),
		new AudioInfo("����� ����", "����"),
		new AudioInfo("��鸮�� �ɵ� �� ���� �� ��Ǫ ���� ������ �ž�", "�����")
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
		cout << "���� : " << mediaVector[randomIndex]->GetTitle() << " / �뷡�� �θ� ������?" << endl;

	else if (mediaVector[randomIndex]->mediaType == EMediaType::MOVIE)
		cout << "���� : " << static_cast<MovieInfo*>(mediaVector[randomIndex])->GetQuotes() << " / ��ȭ�� ������?" << endl;
	else
		cout << "����!";

	getline(cin, userInput);

	if (mediaVector[randomIndex]->mediaType == EMediaType::AUDIO &&
		static_cast<AudioInfo*>(mediaVector[randomIndex])->GetSinger() == userInput)
		cout << "����!" << endl;

	else if (mediaVector[randomIndex]->mediaType == EMediaType::MOVIE &&
		mediaVector[randomIndex]->GetTitle() == userInput)
		cout << "����!" << endl;

	else
		cout << "����!" << endl;
}

