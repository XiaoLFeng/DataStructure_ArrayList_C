/*
 *
 */

#include <cstdio>
#define MAXSIZE 100

typedef struct {
    int data[MAXSIZE];
    int length;
} ArrayList;

// 初始化线性表
void InitList(ArrayList &L) {
    L.length = 0;
}

// 销毁线性表
void DestroyList(ArrayList &L) { }

// 按顺序插入线性表
// 用来输入一个递增有序线性表（由键盘输入n个整数）；
void PutSeqList(ArrayList &L,int n) {
    // 判断当前线性表加入n个内容是否溢出
    if (L.length + n >= MAXSIZE) {
        printf("[WARNING] 线性表超出限制大小，请重试");
        return;
    }
    // 循环加入数据

}

int LengthList(ArrayList &L) {

}

int PositionList(ArrayList &L,int x) {

}

int InsertList(ArrayList &L,int i,int e) {

}

void OutputSeqList(ArrayList &L) {

}

int main() {
    ArrayList list;
    InitList(list);

    DestroyList(list);
    return 0;
}

