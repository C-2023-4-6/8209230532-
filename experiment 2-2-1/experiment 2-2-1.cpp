// experiment 2-2-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int indexOf(const char *s1, const char* s2) {
    for (int i = 0; s2[i] != '\0'; i++) {
        const char* p1 = s1;
        const char* p2 = s2 + i;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;                                         
            p2++;                                        
        }
        if (*p1=='\0') {//當第一個數組中的字符檢索完畢後，若找到匹配的字符，返回該字符在陣列二中的位置
            return i;
        }
    }
    return -1; // 若没有找到匹配 返回-1
    }


int main() {
    const int maxLength = 100;
    char s1[maxLength] = { 0 };
    char s2[maxLength] = {0};

    cout << "Enter the first string: ";
    cin.getline(s1, maxLength);//可以取得的最大字符數

    cout << "Enter the second string: ";
    cin.getline(s2, maxLength);

    if (indexOf(s1, s2) != -1) {//若接收到的回傳值不為-1，顯示該字符在陣列二中的位置
        cout << "s1 is a substring of s2 at index " << indexOf(s1, s2) << endl;
    }
    else {//若接收到的回傳值為-1，顯示無符合匹配結果
        cout << "s1 is not a substring of s2" << endl;
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
