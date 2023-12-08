// experiment 1-1-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void result(int x, int y, int& max, int& min) {
    //尋找最大公約數
    int d = x < y ? x : y;//找最小的數
    int container1, container2;//儲存計算結果
    for (int i = d; i >= 1; i--) {//持續尋找最大公因數
        container1 = x % i;
        container2 = y % i;
        if ((container1 == 0) && (container2 == 0)) {//當找到最大公因數，跳脫迴圈
            max = i;
            break;
        }
        else {
            continue;//若不是，則繼續迴圈直到找到最大公約數
        }
    }
    //尋找最小公倍數
    int e = x > y ? x : y;//尋找兩數中最大的數
    while (true) {
        if ((e % x == 0) && (e % y == 0)) {
            min = e;
            break;
        }
        e++;
    }
}

int main()
{
    int a, b,max,min;//輸入要比的數
    cout<<"輸入兩數" << endl;
    cin >> a >> b;//將數值存入A和B
    result(a, b, max, min);
    cout << "最大公約數" << max << endl;
    cout << "最小公倍數" << min <<endl;
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
