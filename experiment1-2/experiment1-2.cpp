// experiment1-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

bool is_prime(int num) {
	if ((num % 2 != 0) && (num % 3 != 0) && (num % 5 != 0) && (num % 7 != 0)&&(num!=1)) {//判斷是否為素數
		return true;
	}
	else if ((num == 2) || (num == 3) || (num == 5) || (num == 7)) {//判斷是否為2 3 5 7等素數
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int flag = 0;//計數器
	for (int i = 1; i <= 200; i++) {//當到達十個元素時，換行
		if (is_prime(i) == true) {
			cout << i<<" ";
			flag++;
			if ((flag %10)==0) {
				cout << endl;
			}
		}
	}
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
