#include <stdio.h>

int main()
{
    int a = 5;
    int* ptr;      //ptr�̶�� �����͸� �����Ѵ�.
    //asterisk �뵵 :
    // 1. ������ �����Ҷ� 
    // 2. �ش� �ּ��� ���� �����ϴ� �뵵 

    ptr = &a;
    // a�� �ּ� Ȯ�� �� ptr�� �Ҵ��ϱ�.
    // & is ampersand >> ������ ����ϸ鼭 ���� ����ϴ� ��ȣ ������ �ּ� ���� �� ����.

    printf("address of a is %x\n\n", &a);
    printf("value of ptr is %x\n\n", ptr); //ptr�� �ּ� = a�� �ּ� ����
    printf("%d\n\n", sizeof(int));
    printf("value of ptr is %d", *ptr);    //�̶� ��¥ ptr�� ���� ����Ҷ����� �̷��� �ۼ���

    return 0;
}