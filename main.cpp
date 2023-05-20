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

// ��ʼ�����Ա�
void InitList(ArrayList &L) {
    L.length = 0;
}

// �������Ա�
void DestroyList(ArrayList &L) {}

// ��˳��������Ա�
// ��������һ�������������Ա��ɼ�������n����������
void PutSeqList(ArrayList &L, int n) {
    // �жϵ�ǰ���Ա����n�������Ƿ����
    if (L.length + n >= MAXSIZE) {
        printf("[WARNING] ���Ա������ƴ�С��������");
        return;
    }
    // ѭ����������
    int inputData;
    printf("[INFO] ������ %d �����ݣ��м��ûس���������\n", n);
    for (int i = L.length; i < L.length + n; ++i) {
        printf("[INPUT] ��������� %d �����ݣ�", i + 1);
        scanf_s("%d", &inputData);
        L.data[i] = inputData;
    }
    L.length += n;
}

// ���Ա�ĳ���
int LengthList(ArrayList L) {
    return L.length + 1;
}

// �����ҵ���ֵΪindexԪ�ص�λ�ã����ز���λ�õ��߼���ţ��߼���Ŵ�1��ʼ��
int PositionList(ArrayList &L, int index) {
    if (index > L.length || index <= 0) {
        printf("[WARNING] �������ʵ����ݲ�����");
        return -999;
    }
    return L.data[index - 1];
}

// ���뵥������e
int InsertList(ArrayList &L, int index, int e) {
    if (index > L.length || index <= 0) {
        printf("[WARNING] �������ʵ����ݲ�����");
        return 0;
    }
    for (int i = L.length; i >= index - 1; --i) {
        L.data[i] = L.data[i - 1];
    }
    L.data[index - 1] = e;
    L.length++;
    printf("[WARNING] ���Ա��� %d λ�ò������� %d\n", index, e);
    return 1;
}

// ���ȫ������
void OutputSeqList(ArrayList L) {
    printf("[INFO] ���Ա�������Ϊ��[ ");
    for (int i = 0; i < L.length - 1; ++i) {
        printf("%d ", L.data[i]);
    }
    printf("%d", L.data[L.length - 1]);
    printf(" ]\n");
}

int main() {
    ArrayList list;
    InitList(list);

    // �����������
    int size;
    printf("[WAITING] ��������Ҫ����������ݣ�");
    scanf_s("%d",&size);
    PutSeqList(list, size);

    // ��
    printf("[INFO] ��Ϊ��%d\n", LengthList(list));
    OutputSeqList(list);

    // ��3λ�ú������ָ������0
    InsertList(list, 3, 0);

    // ��
    printf("[INFO] ��Ϊ��%d\n", LengthList(list));
    OutputSeqList(list);

    DestroyList(list);
    system("pause");
    return 0;
}

