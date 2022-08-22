//#include <time.h>
//#include <stdlib.h>
//#include<stdio.h>
//
////선언
//void p(int num);
//int function_with_return();
//void function_without_params();
//void function_with_params(int num1, int num2, int num3);
//int apple(int total, int ate); //전체 total개에서 ate개를 먹고남은 수를 반환
//
//int add(int num1, int num2);
//
////int main_function(void)
//{
//	/*srand(time(NULL));
//	int num = rand() % 100 + 1;
//	printf(" 숫자 : %d\n", num);
//	int answer = 0;
//	int chance = 5;
//
//	while (1)
//	{
//		printf("남은 기회 %d번 \n", chance--);
//		printf("숫자를 맞혀보세요 1~100사이 : ");
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
//			printf("정답입니다.\n"); 
//			break;
//		}
//		else 
//		{
//
//		
//			printf("알 수 없는 오류가 발생했어요 \n");
//		}
//		if (chance == 0)
//		{
//			printf(" 모든 기회를 다 사용하셨어요 수고링~ \n");
//			break;
//		}
//
//
//	}
//	*/
//
//	//function
//	// 계산기
//
//	/*int num = 2;
//	//printf("num은 %d 입니다.\n", num);
//	p(num);
//
//
//	//2 + 3은?
//	num = num + 3;// num += 3;
//	//printf("num은 %d 입니다\n", num);
//	p(num);
//
//	//5-1은?
//	num -= 1; // num= num -1;
//	//printf("num은 %d 입니다. \n", num); //4
//	p(num);
//
//
//	num *= 3;
//	//printf("num은 %d입니다. \n", num);//12
//	p(num);
//
//
//	num /= 6;
//	//printf("num은 %d입니다. \n", num); //2
//	p(num);*/
//	/*int ret = function_with_return();
//	p(ret);*/
//
//	//파라미터(전달값)가 없는 함수
//	//function_without_params();
//
//	//파라미터(전달값)이 있는 함수
//	//function_with_params(35, 27, 12);
//	
//	//파라미터 (전달값)도 받고, 반환값이 있는 함수
//	//int ret = apple(5, 2);//5개의 사과중에서 2개를 먹었어요
//	//printf("사과 5개중에 2개를 먹으면? %d 개가 남아요\n", ret);
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
//	printf("num 은 %d 입니다\n",num);
//}
//
////전달값 : 36
////함수 : ㅁ+4
////출력값(반환형) : ?
//
//int function_with_return()
//{
//	printf("반환값이 있는 함수입니다.\n ");
//	return 10;
//}
//
//void function_without_params()
//{
//	printf("전달값이 없는 함수입니다 \n");
//}
//void function_with_params(int num1, int num2, int num3)
//{
//	printf(" 전달값이 있는 함수 이며, 전달 받은 값은 %d %d %d 입니다.\n", num1 , num2, num3);
//}
//int apple(int total, int ate)
//{
//	printf("전달값과 반환값이 있는 함수 입니다 \n");
//	return total - ate;
//}
//
//int add(int num1, int num2)
//{
//	return num1 + num2;
//}