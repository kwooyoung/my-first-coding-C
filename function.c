//#include <time.h>
//#include <stdlib.h>
//#include<stdio.h>
//
////����
//void p(int num);
//int function_with_return();
//void function_without_params();
//void function_with_params(int num1, int num2, int num3);
//int apple(int total, int ate); //��ü total������ ate���� �԰��� ���� ��ȯ
//
//int add(int num1, int num2);
//
////int main_function(void)
//{
//	/*srand(time(NULL));
//	int num = rand() % 100 + 1;
//	printf(" ���� : %d\n", num);
//	int answer = 0;
//	int chance = 5;
//
//	while (1)
//	{
//		printf("���� ��ȸ %d�� \n", chance--);
//		printf("���ڸ� ���������� 1~100���� : ");
//		scanf_s("%d", &answer);
//		if (answer < num)
//		{
//			printf("Up\n\n");
//		}
//		else if (answer > num)
//		{
//			printf("down \n\n");
//
//		}
//		else if (answer = num)
//		{
//			printf("�����Դϴ�.\n"); 
//			break;
//		}
//		else 
//		{
//
//		
//			printf("�� �� ���� ������ �߻��߾�� \n");
//		}
//		if (chance == 0)
//		{
//			printf(" ��� ��ȸ�� �� ����ϼ̾�� ����~ \n");
//			break;
//		}
//
//
//	}
//	*/
//
//	//function
//	// ����
//
//	/*int num = 2;
//	//printf("num�� %d �Դϴ�.\n", num);
//	p(num);
//
//
//	//2 + 3��?
//	num = num + 3;// num += 3;
//	//printf("num�� %d �Դϴ�\n", num);
//	p(num);
//
//	//5-1��?
//	num -= 1; // num= num -1;
//	//printf("num�� %d �Դϴ�. \n", num); //4
//	p(num);
//
//
//	num *= 3;
//	//printf("num�� %d�Դϴ�. \n", num);//12
//	p(num);
//
//
//	num /= 6;
//	//printf("num�� %d�Դϴ�. \n", num); //2
//	p(num);*/
//	/*int ret = function_with_return();
//	p(ret);*/
//
//	//�Ķ����(���ް�)�� ���� �Լ�
//	//function_without_params();
//
//	//�Ķ����(���ް�)�� �ִ� �Լ�
//	//function_with_params(35, 27, 12);
//	
//	//�Ķ���� (���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
//	//int ret = apple(5, 2);//5���� ����߿��� 2���� �Ծ����
//	//printf("��� 5���߿� 2���� ������? %d ���� ���ƿ�\n", ret);
//
//	int num = 2;
//	num = add(num, 3);
//	p(num);
//
//	num = sub(num, 1);
//
//	return 0;
//}
//
//void p(int num)
//{
//	printf("num �� %d �Դϴ�\n",num);
//}
//
////���ް� : 36
////�Լ� : ��+4
////��°�(��ȯ��) : ?
//
//int function_with_return()
//{
//	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n ");
//	return 10;
//}
//
//void function_without_params()
//{
//	printf("���ް��� ���� �Լ��Դϴ� \n");
//}
//void function_with_params(int num1, int num2, int num3)
//{
//	printf(" ���ް��� �ִ� �Լ� �̸�, ���� ���� ���� %d %d %d �Դϴ�.\n", num1 , num2, num3);
//}
//int apple(int total, int ate)
//{
//	printf("���ް��� ��ȯ���� �ִ� �Լ� �Դϴ� \n");
//	return total - ate;
//}
//
//int add(int num1, int num2)
//{
//	return num1 + num2;
//}