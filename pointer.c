#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);

int main_pointer(void)
{

	//������
	//[ö��] : 101ȣ -> �޸� ������ �ּ�
	//[����] : 201ȣ -> 
	//[�μ�] : 301ȣ

	//int ö�� = 1; // �� �� �տ� '��ȣ'�� �ɷ�����
	//int ���� = 2;
	//int �μ� = 3;


	//printf("ö���� �ּ� : %d, ��ȣ: %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ: %d\n", &����, ����);
	//printf("�μ��� �ּ� : %d, ��ȣ: %d\n", &�μ�, �μ�);
	//

	////�̼Ǹ� ! 

	//// ù��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��

	//int * �̼Ǹ�;// ������ ����
	//�̼Ǹ� = &ö��;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�); 
	//
	//�̼Ǹ� = &����;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//�̼Ǹ� = &�μ�;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	////�ι�° �̼� : �� ��ȣ�� 3�� ���ض�
	//�̼Ǹ� = &ö��;
	//*�̼Ǹ� = *�̼Ǹ� * 3;

	//printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//�̼Ǹ� = &����;
	//*�̼Ǹ� = *�̼Ǹ� * 3;

	//printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);


	//�̼Ǹ� = &�μ�;
	//*�̼Ǹ� = *�̼Ǹ� * 3;

	//printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);



	////������ 
	////�̼Ǹ��� �ٲ� ��ȣ���� 2�� ���� ! 
	//int* ������ = �̼Ǹ�;

	//printf("\n ... �����̰� �̼� �����ϴ��� ...\n");
	//������ = &ö��;
	//*������ = *������ - 2; //ö�� = ö�� - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %d ,��ȣ : %d\n", ������, *������);

	//������ = &����;
	//*������ = *������ - 2; //ö�� = ö�� - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %d ,��ȣ : %d\n", ������, *������); 
	//������ = &�μ�;
	//*������ = *������ - 2; //ö�� = ö�� - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %d ,��ȣ : %d\n", ������, *������);

	//printf(" \n..... ö�� ���� �μ��� ���� ���ż��� �ٲ� ��ȣ�� ���� ���� ...\n\n");

	//printf("ö���� �ּ� : %d, ��ȣ: %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ: %d\n", &����, ����);
	//printf("�μ��� �ּ� : %d, ��ȣ: %d\n", &�μ�, �μ�);

	////������.. �̼Ǹ��� ��� ���� �ּҴ� ..&�̼Ǹ����� Ȯ��
	//printf("�̼Ǹ��� �ּ� : %d\n", &�̼Ǹ�);
	//printf("�������� �ּ� : %d\n", &������);

	//int arr[3] = { 5,10,15 };
	//int* ptr = arr;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("������ ptr[%d]�� �� : %d\n", i, arr[i]);
	//}

	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;

	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	//	printf("�迭 arr[%d]�� �� : %d\n", i, *(arr+i));

	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("������ ptr[%d]�� �� : %d\n", i, arr[i]);
	//	printf("������ ptr[%d]�� �� : %d\n", i, *(ptr+i));
	//}
	//printf("arr ��ü�� �� : %d\n", arr);
	//printf("arr[0]�� �ּ� : %d\n", &arr[0]);

	//printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr);
	//printf("arr[0]�� ���� �� : %d\n", *&arr[0]);

//swap
//int a = 10;
//int b = 20;
//	//a�� ���� ���� �ٲ۴�.
//
//printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);
//swap_addr(&a,&b);
//printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);
//
//
//	//���� ���� ���� (call bye Value) -> ���� �����Ѵٴ� �ǹ�
//	return 0;
//
//}
//
////void swap(int a, int b)
////{
////	int temp = a;
////	 a = b; 
////	 b = temp;
////	 printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);
////}
//
//void swap_addr(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	printf("(�ּ� �� ���� Swap �Լ� �� => a: %d, b: %d\n", *a, *b);
//}
	
int arr2[3] = { 10,20,30 };
//changeArray(arr2);
changeArray(&arr2[0]);
for (int i = 0; i < 3; i++)
{
	printf("%d\n", arr2[i]);
}
//scanf ���� &num �� ����ϴ� ����?


	return 0;
}


void changeArray(int* ptr)
{
	ptr[2] = 50;
}