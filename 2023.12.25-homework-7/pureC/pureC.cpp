#include <iostream>

int main()
{
	FILE* fp, * out;// создаём два фаила 
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

	while (!feof(fp)) {//пока не достигнут конец файла
		ch = getc(fp);//считываем символ
		pos++;//контролируем позицию
		if ((ch == ' ') && (len_word != 0)) { // проверяем, что если считали пробел и при этом длина слова !=0
			count++;//увеличиваем счетчик слов
			len_word = 0;//обнулили длину слова
			count_words++;// увеличили количество слов в предложении
		}
		else if (((ch == '.')|| (ch == '?')|| (ch == '!')) && (len_word != 0)) {//проверям конец предложения

			if (count_words > maxSent) {//сравниваем кол-во слов в предложении с максимальной на данный момент
				maxSent = count_words;// переопределяем максимум
				end_max = pos;//запоминаем окончание текущего максимального предлождения
				begin_max = begin;//переопределяем начало предложения
			}
			count_words = 0;// обмнуляем счетчик слов в предложении
			begin = pos + 1;//запоминаем позицию нового предложения
		}
		else {
			len_word++;//не попали ни в одно условие, просто увеличиваем длину слова.
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
	if (fseek(fp, begin_max, SEEK_SET) == 0) { // находим позицию самого длинного предложения, начиная с начала файла
		for (int i = 0; i < (end_max - begin_max); i++)// считываем посимвольно и выводим предложение
	
			fprintf(out, "%c", getc(fp));
	}

	fclose(fp);//закрываем файлы
	fclose(out);

}
