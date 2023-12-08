// experiment 2-2-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;

int parseHex(const char* const hexString) {
	int digitvalue = 0;
	int num = 0;//十進位制加總
	int power = 0;//次數
	for (int i = strlen(hexString)-1; i >=0; i--) {//設i小於hexString的長度，從右到左檢索
		char digit = hexString[i];
		if ((digit >= 'a') && (digit <= 'f')) {
			digitvalue = 10 + (digit - 'a');//將字符型轉換為整數型計算
		}
		else if ((digit >= 'A') && (digit <= 'F')) {
			digitvalue = 10 + (digit - 'A');
		}
		else if ((digit >= '0') && (digit <= '9')) {
			digitvalue = digit - '0';
		}
		else {
			return -1;
		}
		num += digitvalue * ((int)pow(16, power));//雙精度整數轉整數，計算次方
		power++;
	}
	return num;
}

int main()
{
	const int size = 100;
	char s[] = { 0 };
	cout << "enter" << endl;
	cin.getline(s, size);
	if (parseHex(s) != -1) {
		cout << parseHex(s) << endl;
	}
	else {
		cout << "error" << endl;
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
