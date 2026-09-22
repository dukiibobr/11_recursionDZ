
#include <iostream>
using namespace std;


int foo(int a) {
	if (a == 0)
	{
		return 0;
	}
	cout << "hello " << a << endl;
	a--;
	return foo(a);
}

int Suma(int arr[], int size, int index) {
	if (index == size - 1)
	{
		return arr[index];
	}
	return arr[index] + Suma(arr, size, index + 1);

}

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 51;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void quickSort(int arr[], int size, int b, int e) {
	int i = b, j = e;
	int temp, p;
	p = arr[(b + e) / 2];
	do
	{
		while (arr[i] < p)i++;
		while (arr[j] > p)j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	if (b < j)quickSort(arr, size, b, j);
	if (i < e)quickSort(arr, size, i, e);
}



int binarySearch(int arr[], int size, int key) {
	int b = 0, e = size - 1;
	while (true)
	{
		int p = (b + e) / 2;
		if (key > arr[p]) {
			b = p + 1;
		}
		else if (key < arr[p])
		{
			e = p - 1;
		}
		else if (key == arr[p])
		{
			return p;
		}

		if (b > e)
		{
			return -1;
		}
	}

}

int pow(int number, int step) {
	if (step == 0)
	{
		return 1;
	}
	return number * pow(number, step - 1);
}


int star(int a) {
	if (a == 0)
	{
		return 0;
	}
	cout << "* ";
	a--;
	return star(a);
}


int summ(int start, int end) {
	if (start>end)
	{
		return 0;
	}
	return start += summ(start+1,end);
}



	
int suma1(int arr[], int index,int count) {
	if (count==10)
	{
		return 0;
	}
	return arr[index]+ suma1 (arr, index+1,count+1);
}

int minPos(int arr[], int index, int minSum, int minPosition) {
	if (index>90)
	{
		return minPosition;
	}
	int current = suma1(arr, index, 0);
	if (current<minSum)
	{
		minSum = current;

		minPosition = index;
	}
	return minPos(arr, index + 1, minSum, minPosition);
	
}

int main()
{
	srand(time(0));
	//foo(10);
	//cout<<foo<<endl;


	//const int size = 10;
	//int arr[size] = { 1,3,4,56,76,4,33,7 };
	//int suma = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//	suma += arr[i];
	//}
	//cout << endl;
	//cout << "suma=" << suma << endl;


	//suma=Suma(arr, size, 0);


	//const int size = 10;
	//int arr[size];

	//InitArray(arr, size);
	//ShowArray(arr, size);

	//quickSort(arr, size, 0, size - 1);
	//

	//ShowArray(arr, size);




	//int searchKey, indexFind;
	//cout << "Enter search key --> ";
	//cin >> searchKey;
	//indexFind = binarySearch(arr, size, searchKey);
	//if (indexFind != -1)
	//{
	//	cout << "Element [" << searchKey << "] find in index ["
	//		<< indexFind << "]" << endl;
	//}
	//else
	//{
	//	cout << "Element " << searchKey << " not found " << endl;
	//}





	//1 return (num*num)*stepin step=0-break

	//int number;
	//cout << "enter number to put in step" << endl;
	//cin >> number;

	//int step;
	//cout << "enter stepin" << endl;
	//cin >> step;

	//cout << "stepin=" << pow(number, step) << endl;

	//2 a+1+1+1 WHEN A=B break

	//int a;
	//cout << "enter amount of stars" << endl;
	//cin >> a;

	//star(a);


	//3

	//int start;
	//cout << "enter start of range" << endl;
	//cin >> start;

	//int end;
	//cout << "enter end of range" << endl;
	//cin >> end;
	//for (int i = start; i <= end; i++)
	//{
	//	cout << i << " ";
	//}

	//cout << "suma=" << summ(start, end) << endl;



	//5 наскільки я пам'ятаю ви казали робити з 6 дисками то я так і зроблю

	//const int size = 6;

	//int pole3[size] = {0,0,0,0,0,0};
	//int pole2[size] = {0,0,0,0,0,0};
	//int pole1[size] = {1,2,3,4,5,6};
	//можете не перевіряти 5 бо я не розібрався і закинув


//4
const int size = 100;
int arr[size];

InitArray(arr, size);
ShowArray(arr, size);

int minSum = 9999999;
int minPos1 = 0;
minPos1 = minPos( arr,  0,  minSum,  minPos1);

cout << "position: " << minPos1 << endl;
cout << "suma: " << suma1(arr,minPos1,0) << endl;
}