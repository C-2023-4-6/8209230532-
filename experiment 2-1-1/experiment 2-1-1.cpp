// experiment 2-1-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main() {
    const int size = 10;  // 數组大小
    int numbers[size];    // 存放輸入數的數組
    int uniquenumbers[size];  // 存放不同數的數組
    int uniquecount = 0;  // 不同數的記數

    cout << "輸入十個數" << endl;

    for (int i = 0; i < size; i++) {
       cin >> numbers[i]; //輸入數 並存進numbers數組中
        bool isnew = true; 
        for (int j = 0; j < uniquecount; j++) { //比對數組中的元素 若相同 isnew賦false並繼續下個循環 若不同 繼續
            if (numbers[i] == uniquenumbers[j]) {
                isnew = false;
                break;
            }
        }
        // 如果是新值，則存入uniquenumbers數組後 uniquecount記數增加1
        if (isnew) {
            uniquenumbers[uniquecount] = numbers[i];
            uniquecount++;
        }
    }

    // 輸出不同的數
    cout << "不同的數有：" << std::endl;
    for (int i = 0; i < uniquecount; ++i) {
       cout << uniquenumbers[i] << " ";
    }
    cout << endl;

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
