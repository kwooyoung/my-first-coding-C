#include<stdio.h>
#include <time.h>


int game_main(void)
{

	srand(time(NULL));
	printf("###########�ƺ��� ��Ӹ�����############ \n");
	int cntshowbottle = 0;//������ ��Ʋ ��
	int frontbottle = 0;// �հ��� ������ ��Ʋ �� 
	int answer =0; // ����
	int treatment = rand() % 4;//�߸��� ���� 0~3 ;

	for (int i=1; i<=3; i++) // 3���� ��ȸ�� �������� 
	{
		int bottle[4] = { 0,0,0,0 };
		do {
			

			cntshowbottle = rand() % 2 + 2; // rand%2 = 0~1 // +2 = 2~3 
		
		} while (cntshowbottle == frontbottle);
			frontbottle = cntshowbottle;

		printf("%d ��° �õ� \n", i);

		int isincluded = 0; //�߸����� �������� �˷��ִ� �Լ�


		for(int j = 0; j < cntshowbottle; j++)
		{
			int randombottle = rand() % 4; //0~3������ ����

			//���� ���õ��� ���� ���̸� ����ó��

			if (bottle[randombottle] == 0)
			{
				bottle[randombottle] = 1;
				if (randombottle == treatment)
				{
			
				isincluded = 1;
			    }
			}

			//�̹� ���õ� ���̸� ������
			else
			{
				j--;
			}
		}
		//����ڿ��� ����ǥ��
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d", k + 1);
		}

			printf("������ �Ӹ��� �ٸ��ϴ�.\n");
			if (isincluded == 1)
			{
				printf("����!! �Ӹ��� �����\n");
			}
			else
			{
				printf("��!! �����Ͽ����ϴ�\n");
			}
			printf("��� �Ͻ÷��� �ٸ� Ű�� ��������\n");
			getchar();
		}

			printf("�߸����� �� �� �ϱ��??");
			scanf_s("%d", &answer);

			if (answer == treatment+1)
			{
				printf(">> �����մϴ� �����Դϴ�!!\n");
			}
			else
			{
				printf(">>�� �����ϼ̾�� ������ %d �Դϴ�!", treatment+1);
			}

		
			return 0;

	







	return 0;
}
