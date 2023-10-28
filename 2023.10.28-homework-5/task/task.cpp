#include<iostream>
#include<stdlib.h>

void printArray(int* a, int len);
void expandArray(int*& a, int& len);
void addElement(int*& a, int& len, int element);
void contractArray(int*& a, int& len);
bool indexValid(int index, int len);
int extractElement(int*& a, int& len, int index);
void printReverseArray(int* a, int len);
//my
void reverseArray(int*& a, int len);
void sort(int* a, int len);
int comp1(const void* a, const void* b);
void changeMaxMin(int*& a, int len);
void deleteDuplicate(int*& a, int& len);
void randomElements(int*& a, int& len, int n);
void printMenu();

int main(int argc, char* argv[])
{
	int* a = nullptr;
	int len = 0;
	bool exit = false;
	while (!exit)
	{
		{
			//system("cls");
			printMenu();
			printArray(a, len);
		}
		int choice = 0;
		{
			std::cin >> choice;
		}
		{
			switch (choice)
			{
			case 0:
				exit = true;
				break;
			case 1:
				printArray(a, len);
				system("pause");
				break;
			case 2:
			{
				int element = 0;
				std::cout << "Input element to add : ";
				std::cin >> element;
				addElement(a, len, element);
				break;
			}
			case 3:
			{
				int index = 0;
				std::cout << "Input index to extract : ";
				std::cin >> index;
				std::cout << "Extracted  " << extractElement(a, len, index) << std::endl;
				break;
			}
			case 4:
			{
				std::cout << "Sarted array :" << std::endl;
				sort(a, len);
				printArray(a, len);
				break;
			}
			case 5:
			{
				std::cout << "Reversed array:" << std::endl;
				reverseArray(a, len);
				printArray(a, len);
				break;
			}
			case 6:
			{
				std::cout << "Max and min were changed:" << std::endl;
				changeMaxMin(a, len);
				printArray(a, len);
				break;
			}
			case 7:
			{
				std::cout << "After Deleted Duplicate: " << std::endl;
				deleteDuplicate(a, len);
				printArray(a, len);
				break;
			}
			case 8:
			{
				std::cout << "Input count N of random elements:" << std::endl;
				int n = 0;
				std::cin >> n;
				randomElements(a, len, n);
				break;
			}
			default:
				std::cout << "Unknown command" << std::endl;
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}

void printArray(int* a, int len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
}

void expandArray(int*& a, int& len)
{
	int* newA = new int[len + 1] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	a = newA;
	++len;
}

void addElement(int*& a, int& len, int element)
{
	expandArray(a, len);
	a[len - 1] = element;
}

void contractArray(int*& a, int& len)
{
	if (a != nullptr)
	{
		int* newA = new int[len - 1];
		for (int i = 0; i < len - 1; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
		a = newA;
		--len;
	}
}

bool indexValid(int index, int len)
{
	return (index >= 0 && index < len);
	/*
	switch (index >= 0 && index < len)
	{
	case true:
		return true;
	case false:
		return false;
	}
	*/
	/*
	if (index >= 0 && index < len)
	{
		return true;
	}
	else
	{
		return false;
	}
	*/
}

int extractElement(int*& a, int& len, int index)
{
	int res = -1;
	if (indexValid(index, len))
	{
		res = a[index];
		for (int i = index; i < len - 1; ++i)
		{
			a[i] = a[i + 1];
		}
		contractArray(a, len);
	}
	return res;
}

void printReverseArray(int* a, int len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			std::cout << a[len - i - 1] << " ";
		}
	}
	std::cout << std::endl;
}

void reverseArray(int*& a, int len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		int* newA = new int[len] { 0 };

		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[len - i - 1];
		}
		delete[] a;
		a = newA;
	}

}
//функция для сортировки по возрастанию
int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
void sort(int* a, int len)
{
	qsort(a, len, sizeof(int), comp1);
	/*int* newA = new int[len] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	a = newA;*/



}

void changeMaxMin(int*& a, int len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		int max = 0;
		int min = 0;
		int max_i = 0;
		int min_i = 0;
		max = a[0];
		min = a[0];
		for (int i = 0; i < len; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				max_i = i;
			}
			if (a[i] < min)
			{
				min = a[i];
				min_i = i;
			}
		}
		int temp = 0;
		temp = a[max_i];
		a[max_i] = min;
		a[min_i] = temp;
	}
}

void deleteDuplicate(int*& a, int& len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		int l = len;
		for (int i = (l - 1); i > 0; i--)
		{
			int temp = 0;
			temp = a[i];
			for (int j = (i - 1); j >= 0; j--)
			{
				if (a[j] == temp)
				{
					extractElement(a, len, i);
					break;
				}
			}
		}
	}

}

void randomElements(int*& a, int& len, int n)
{
	for (int i = 0; i < n; i++)
	{
		int element = rand();
		addElement(a, len, element);

	}
}
void printMenu()
{
	std::cout << "0 - Exit" << std::endl;
	std::cout << "1 - Print array" << std::endl;
	std::cout << "2 - Append element to array" << std::endl;
	std::cout << "3 - Extract element from array" << std::endl;
	std::cout << "4 - Sort array" << std::endl;
	std::cout << "5 - Reverse array ( new array)" << std::endl;
	std::cout << "6 - Change max and min " << std::endl;
	std::cout << "7 - Delete duplicate " << std::endl;
	std::cout << "8 - Add random elements" << std::endl;
}