// experiment 2-2-3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void swap(int &a, int &b) {//交換元素
    int t = a;
    a = b;
    b = t;
}

void sort(int* a,int size) {//對數組中的元素進行排序
    int min=0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {//交換大小順序
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    cout << "大小" << endl;
    int size ;
    cin >> size;
    int* a = new int[size];//聲明一個動態數組
    cout << "輸入數組元素" << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    sort(a, size);
    for (int e = 0; e < size; e++) {
        cout << *(a+e) << " ";//取數組a中的第e個元素並輸出
    }
    delete[] a;
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
