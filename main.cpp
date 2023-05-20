/*
 *
 */

#include <cstdio>
#include <cstdlib>

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
void DestroyList(ArrayList &L) {}

// 按顺序插入线性表
// 用来输入一个递增有序线性表（由键盘输入n个整数）；
void PutSeqList(ArrayList &L, int n) {
    // 判断当前线性表加入n个内容是否溢出
    if (L.length + n >= MAXSIZE) {
        printf("[WARNING] 线性表超出限制大小，请重试");
        return;
    }
    // 循环加入数据
    int inputData;
    printf("[INFO] 请输入 %d 个数据（中间用回车隔开）：\n", n);
    for (int i = L.length; i < L.length + n; ++i) {
        printf("[INPUT] 正在输入第 %d 个数据：", i + 1);
        scanf_s("%d", &inputData);
        L.data[i] = inputData;
    }
    L.length += n;
}

// 线性表的长度
int LengthList(ArrayList L) {
    return L.length + 1;
}

// 用来找到数值为index元素的位置，返回插入位置的逻辑序号（逻辑序号从1开始）
int PositionList(ArrayList &L, int index) {
    if (index > L.length || index <= 0) {
        printf("[WARNING] 您所访问的数据不存在");
        return -999;
    }
    return L.data[index - 1];
}

// 插入单个数据e
int InsertList(ArrayList &L, int index, int e) {
    if (index > L.length || index <= 0) {
        printf("[WARNING] 您所访问的数据不存在");
        return 0;
    }
    for (int i = L.length; i >= index - 1; --i) {
        L.data[i] = L.data[i - 1];
    }
    L.data[index - 1] = e;
    L.length++;
    printf("[WARNING] 线性表在 %d 位置插入数据 %d\n", index, e);
    return 1;
}

// 输出全部数据
void OutputSeqList(ArrayList L) {
    printf("[INFO] 线性表中数据为：[ ");
    for (int i = 0; i < L.length - 1; ++i) {
        printf("%d ", L.data[i]);
    }
    printf("%d", L.data[L.length - 1]);
    printf(" ]\n");
}

int main() {
    ArrayList list;
    InitList(list);

    // 插入五个数据
    int size;
    printf("[WAITING] 请输入需要插入多少数据：");
    scanf_s("%d",&size);
    PutSeqList(list, size);

    // 表长
    printf("[INFO] 表长为：%d\n", LengthList(list));
    OutputSeqList(list);

    // 在3位置后面插入指定数据0
    InsertList(list, 3, 0);

    // 表长
    printf("[INFO] 表长为：%d\n", LengthList(list));
    OutputSeqList(list);

    DestroyList(list);
    system("pause");
    return 0;
}

