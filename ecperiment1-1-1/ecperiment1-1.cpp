// ecperiment1-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int max(int x, int y) {//尋找最大公約數
    int c = x < y ? x : y;//找最小的數
    int containera, containerb;//儲存計算結果
    for (int i = c; i >= 1; i--) {//持續尋找最大公因數
        containera = x % i;
        containerb = y % i;
        if ((containera == 0) && (containerb == 0)) {//當找到最大公因數，跳脫迴圈
            return i;
            break;
        }
        else {
            continue;//若不是，則繼續迴圈直到找到最大公約數
        }
    }
}
int min(int x, int y) {//尋找最小公倍數
    int c = x > y ? x : y;//尋找兩數中最大的數
    int containera, containerb;//儲存計算結果
    for (int i = c; i >= c; i++) {//當找到最小公約數，跳脫迴圈
        containera = i % x;
        containerb = i % y;
        if ((containera == 0) && (containerb == 0)) {
            return i;
            break;
        }
        else {
            continue;//若不是，則繼續迴圈直到找到最小公倍數
        }
    }
}


int main()
{
    int a, b;//輸入要比的數
    cout << "輸入兩數" << endl;
    cin >> a >> b;//將數值存入A和B
    cout<<"兩數最大公約數"<<max(a, b)<<endl;//找最大公約數
    cout<<"兩數最小公倍數"<<min(a, b)<<endl;//找最小公倍數

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
