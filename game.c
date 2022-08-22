#include<stdio.h>
#include <time.h>


int game_main(void)
{

	srand(time(NULL));
	printf("###########아빠는 대머리게임############ \n");
	int cntshowbottle = 0;//보여줄 보틀 수
	int frontbottle = 0;// 앞게임 보여줄 보틀 수 
	int answer =0; // 정답
	int treatment = rand() % 4;//발모제 선택 0~3 ;

	for (int i=1; i<=3; i++) // 3번의 기회를 만들었어요 
	{
		int bottle[4] = { 0,0,0,0 };
		do {
			

			cntshowbottle = rand() % 2 + 2; // rand%2 = 0~1 // +2 = 2~3 
		
		} while (cntshowbottle == frontbottle);
			frontbottle = cntshowbottle;

		printf("%d 번째 시도 \n", i);

		int isincluded = 0; //발모제가 포함인지 알려주는 함수


		for(int j = 0; j < cntshowbottle; j++)
		{
			int randombottle = rand() % 4; //0~3까지의 숫자

			//아직 선택되지 않은 병이면 선택처리

			if (bottle[randombottle] == 0)
			{
				bottle[randombottle] = 1;
				if (randombottle == treatment)
				{
			
				isincluded = 1;
			    }
			}

			//이미 선택된 병이면 제선택
			else
			{
				j--;
			}
		}
		//사용자에게 문제표시
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d", k + 1);
		}

			printf("물약을 머리에 바릅니다.\n");
			if (isincluded == 1)
			{
				printf("성공!! 머리가 났어요\n");
			}
			else
			{
				printf("땡!! 실패하였습니다\n");
			}
			printf("계속 하시려면 다른 키를 누르세요\n");
			getchar();
		}

			printf("발모제는 몇 번 일까요??");
			scanf_s("%d", &answer);

			if (answer == treatment+1)
			{
				printf(">> 축하합니다 정답입니다!!\n");
			}
			else
			{
				printf(">>땡 실패하셨어요 정답은 %d 입니다!", treatment+1);
			}

		
			return 0;

	







	return 0;
}
