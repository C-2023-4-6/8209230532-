// experiment 2-1-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void swap(double &a, double &b) {//交換元素
	double t = a;
	a = b;
	b = t;
}
void bubble(double list[], int listSize) {//氣泡排序算法
	bool changed = true;
	int listsize = listSize - 1;
	do
	{
		changed = false;
		for (int j = 0; j < listsize; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);

}

int main()
{
	const int size = 10;
	double a[size];//定義數組
	for (int i = 0; i < size; i++) {//輸入元素並存進數組
		cout << "輸入第" << i + 1 << "個元素" << endl;
		cin>>a[i];
	}
	bubble(a, size);//數組經過氣泡排序
	for (int j = 0; j < size; j++) {//輸出氣泡排序後的數組
		cout << "第" << j+ 1<< "個元素:" << a[j]<<endl;
	}
	return 0;
}


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
