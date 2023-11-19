#include<iostream>
#include<algorithm>
#include<ctime>

int* initRandomArray(int len, int mn = 0, int mx = 9);
void printArray(int* a, int len);
void swap(int& a, int& b);
void stdsort(int* a, int len);
void mixArray(int* a, int n);
void bubbleSort(int* a, int len);
void selectionSort(int* a, int len);
bool isSorted(int* a, int len);
void monkeySort(int* a, int len);
void insertionSort(int* a, int len);
//////
void gnomeSort(int* a, int len);
void countSort(int* a, int len);
int getMax(int a[], int len);

int main(int argc, char* argv[])
{
	srand(time(0));
	int n = 10;
	int* a = initRandomArray(n);
	printArray(a, n);
	{
		std::cout << "std::sort" << std::endl;
		stdsort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "bubble sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		bubbleSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "selection sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		selectionSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "monkey sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		monkeySort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "insertion sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		insertionSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "gnome sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		gnomeSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "count sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		countSort(a, n);
		printArray(a, n);
	}

	return EXIT_SUCCESS;
}

int* initRandomArray(int len, int mn, int mx)
{
	int* res = new int[len] { 0 };
	for (int i = 0; i < len; ++i)
	{
		res[i] = rand() % (mx - mn + 1) + mn;
	}
	return res;
}

void printArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void stdsort(int* a, int len)
{
	std::sort(a, a + len);
}

void mixArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		swap(a[i], a[rand() % n]);
	}
}

void bubbleSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void selectionSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		int minInd = i;
		for (int j = i + 1; j < len; ++j)
		{
			minInd = (a[minInd] <= a[j] ? minInd : j);
		}
		swap(a[i], a[minInd]);
	}
}

bool isSorted(int* a, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void monkeySort(int* a, int len)
{
	while (!isSorted(a, len))
	{
		mixArray(a, len);
	}
}

void insertionSort(int* a, int len)
{

	for (int i = 1; i < len; ++i)
	{
		int t = i;
		while (t > 0 && a[t] < a[t - 1])
		{
			swap(a[t], a[t - 1]);
			--t;
		}
	}
}

////////////////////
void gnomeSort(int* a, int len) {
	// сортировка
	size_t i = 1;

	while (i < len)
	{
		if (i == 0)
		{
			i = 1;
		}
		if (a[i - 1] <= a[i])
		{
			++i;
		}
		else
		{

			long tmp = a[i];
			swap(a[i], a[i - 1]);
			--i;
		}
	}
}
int getMax(int a[], int len) {
	int max = a[0];
	for (int i = 1; i < len; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
void countSort(int* a, int len) {
	int output[len + 1];
	std::cout << "---" << std::endl;
	int max = getMax(a, len);
	int count[max + 1];
	for (int i = 0; i <= max; i++)
	{
		count[i] = 0;
	}
	for (int i = 1; i <= len; i++)
	{
		count[a[i]]++;
	}
	for (int i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}
	for (int i = len; i >= 1; i--)
	{
		output[count[a[i]]] = a[i];
		count[a[i]] -= 1;
	}
	std::cout << "---" << std::endl;
	printArray(output, len + 1);
	for (int i = 1; i <= len; i++)
	{
		a[i - 1] = output[i];
	}
}