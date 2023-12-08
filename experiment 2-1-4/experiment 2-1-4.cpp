// experiment 2-1-4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;

    while ((i < size1) && (j < size2)) {//將第一個數組合並到第三個數組，並排序
        if (list1[i] < list2[j]) {//排序，比大小
            list3[k] = list1[i];
            k++;
            i++;
        }
        else {
            list3[k] = list2[j];
            k++;
            j++;
        }
    }

    while (i < size1) {//將剩餘的元素合併到第三個數組
        list3[k] = list1[i];
        k++;
        i++;
    }

    while (j < size2) {//將剩餘的元素合併到第三個數組
        list3[k] = list2[j];
        k++;
        j++;
    }
}

int main() {
    const int max = 80;
    int a[max] = { 0 };
    int b[max] = { 0 };
    int c[] = { 0 };  // 合併後的數組

    int size1, size2;

    cout << "輸入第一個數組的元素數量: ";
    cin >> size1;

    cout << "輸入第一個排列好的數組: ";
    for (int i = 0; i < size1; ++i) {
        cin >> a[i];
    }

    cout << "輸入第一個數組的元素數量: ";
    cin >> size2;

    cout << "輸入第一個排列好的數組:";
    for (int i = 0; i < size2; ++i) {
        cin >> b[i];
    }
    int after = size1 + size2;//合併後的大小
    merge(a, size1, b, size2, c);

    cout << "合併好的數組";
    for (int i = 0; i < after; ++i) {
        cout << c[i] << " ";
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
