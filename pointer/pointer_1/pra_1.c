#include <stdio.h>

int main()
{
    int a = 5;
    int* ptr;      //ptr이라는 포인터를 선언한다.
    //asterisk 용도 :
    // 1. 포인터 선언할때 
    // 2. 해당 주소의 값에 접근하는 용도 

    ptr = &a;
    // a의 주소 확인 후 ptr에 할당하기.
    // & is ampersand >> 포인터 사용하면서 자주 사용하는 기호 변수의 주소 원할 때 붙임.

    printf("address of a is %x\n\n", &a);
    printf("value of ptr is %x\n\n", ptr); //ptr의 주소 = a의 주소 같음
    printf("%d\n\n", sizeof(int));
    printf("value of ptr is %d", *ptr);    //이때 진짜 ptr의 값을 출력할때에는 이렇게 작성함

    return 0;
}