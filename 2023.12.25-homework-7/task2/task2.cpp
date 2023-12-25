#include <fstream>
#include <iostream>
#include <map>
#include <string>
#define _CRT_SECURE_NO_WARNINGS

bool isLetter(char c)
{
	return (c >= 'а' && c <= 'я') || (c >= 'А' && c <= 'Я') ||
		(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isSyntax(char c)
{
	return (c == '.' || c == ',' ||
		c == ';' || c == ':' ||
		c == '!' || c == '?' || c == '\t');
}

int main()
{
	FILE* fp, * out;
	char ch;

	if ((fp = fopen("in.txt", "r")) == NULL) {
		printf("Невозможно открыть файл для чтения");
		exit(1);
	}

	int len_word = 0;//длина слова, отслеживаем двойной пробел
	std::string word;//помещаем слово
	int pos = 0;
	std::map< std::string, int > map;
	while (!feof(fp)) {
		ch = getc(fp);

		if ((ch == ' ') || isSyntax(ch)) {
			if (len_word != 0) {
				len_word = 0;
				map[word]++;
				word.clear();
			}
		}
		else {
			len_word++;
			word = word + ch;
		}
	}
	if (len_word > 0) { //обрабатываем последнее слово в файле
		ch = getc(fp);

		if (((ch == ' ') || (isSyntax(ch))) && (len_word != 0)) {

			len_word = 0;
			++map[word];
			word.clear();

		}
	}
	std::string max_word;
	int max_count = 0;
	for (const auto& [word, count] : map) {
		std::cout << word << "---" << count << std::endl;
		if (count > max_count) {
			max_word = word;
			max_count = count;
		}
	}
	std::cout << "The most popular: " << max_word << "---" << max_count;
	fclose(fp);
}



