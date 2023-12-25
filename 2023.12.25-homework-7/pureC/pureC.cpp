#include <iostream>

int main()
{
	FILE* fp, * out;
	char ch;
	if ((fp = fopen("in.txt", "r")) == NULL) {
		printf("Невозможно открыть файл для чтения");
		exit(1);
	}
	if ((out = fopen("out.txt", "wb")) == NULL) {
		printf("Невозможно открыть файл для записи");
		exit(1);
	}

	int count = 0;//количество слов
	int len_word = 0;//длина слова, отслеживаем двойной пробел
	int count_words = 0;//количество слов в предложении
	int maxSent = 0; // макс количество слов в передложении
	int begin = 0;//начало предложения
	int begin_max = 0;//начало предложения
	int end_max = 0;//конец предложения
	int pos = 0;

	while (!feof(fp)) {
		ch = getc(fp);
		pos++;
		if ((ch == ' ') && (len_word != 0)) {
			count++;
			len_word = 0;
			count_words++;
		}
		else if ((ch == '.') && (len_word != 0)) {

			if (count_words > maxSent) {
				maxSent = count_words;
				end_max = pos;
				begin_max = begin;
			}
			count_words = 0;
			begin = pos + 1;
		}
		else {
			len_word++;
		}
	}
	if (len_word > 0) { //обрабатываем последнее слово в файле
		count++;
		count_words++;
		if (count_words > maxSent) {
			maxSent = count_words;
			end_max = pos;
			begin_max = begin;
		}
	}


	fprintf(out, "Words in file % d\n", count);
	fprintf(out, "More longest sen % d\n", maxSent);
	//выводим самое длинное предложение
	if (fseek(fp, begin_max, SEEK_SET) == 0) {
		for (int i = 0; i < (end_max - begin_max); i++)

			fprintf(out, "%c", getc(fp));
	}

	fclose(fp);
	fclose(out);

}
