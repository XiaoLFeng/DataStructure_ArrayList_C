/*
 *
 */

#include <cstdio>
#define MAXSIZE 100

typedef struct {
    int data[MAXSIZE];
    int length;
} ArrayList;

// ��ʼ�����Ա�
void InitList(ArrayList &L) {
    L.length = 0;
}

// �������Ա�
void DestroyList(ArrayList &L) { }

// ��˳��������Ա�
// ��������һ�������������Ա��ɼ�������n����������
void PutSeqList(ArrayList &L,int n) {
    // �жϵ�ǰ���Ա����n�������Ƿ����
    if (L.length + n >= MAXSIZE) {
        printf("[WARNING] ���Ա������ƴ�С��������");
        return;
    }
    // ѭ����������

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

