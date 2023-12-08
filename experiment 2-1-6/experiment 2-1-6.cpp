// experiment 2-1-6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {//初始化計數數組
        counts[i] = 0;
    }
    for (int j = 0; s[j] != 0; j++) {//計算以及轉化大寫字母
        if (((s[j] >= 'a') && (s[j] <= 'z')) || ((s[j] >= 'A') && (s[j] <= 'Z'))) {
            char lowercase = ((s[j] >= 'A') && (s[j] <= 'Z')) ? (s[j] - 32) : s[j];//轉化大寫字母
            counts[lowercase - 'a']++;//將大小寫字母個數記在記數數組中
        }
    }
}

int main()
{
    const int size = 26;
    int letter[size] = { 0 };
    char input[100] = { 0 };
    cout << "enter string: ";
    cin.getline(input, sizeof(input));
    count(input, letter);
    for (int i = 0; i < size; i++) {
        if (letter[i] != 0) {
            cout << (char)('a' + i) << ": " << letter[i] << " times" << endl;//將計數數組輸出
        }//(char)('a' + i)為將數組下標轉為字母
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
