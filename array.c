#include <stdio.h>
#include <time.h>
int array_main(void)
{

	//int subway_array[3]; //[0] [1] [2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0;  i < 3; i++)
	//{
	//	printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", i+1,subway_array[i]);
	//}
	srand(time(NULL));
	printf("\n\n === �ƺ��� ��Ӹ� ����===\n\n");
	int answer; //����� �Է°�
	int treatment = rand() % 4; // �߸��� ���� (0~3)
	
	int cntShowBottle = 0; //�̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0; // �� ���ӿ� ������ �� ����
	// ���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ��� (ó���� 2��-> ������ 3��...)

	// 3���� ��ȸ(3���� �߸��� ���� �õ�)
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; //4���� ��
		do {
			cntShowBottle = rand() % 2 + 2; //������ ����~(0~1,+2 -> 2,3)

		} while (cntShowBottle == prevCntShowBottle);// ���̸� �ݺ� �����̸� ���� , ������ �ݺ� �ٸ��� ����
		prevCntShowBottle = cntShowBottle;  

		int isIncluded = 0;//������ �� �߿� �߸����� ���� �Ǿ��ִ��� ���� (1�̸� ����)
		printf("> %d ��° �õ� : ", i);
		
		//������ �� ������ ����.
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; //0~3������ ��

			//���� ���õ��� ���� ���̸�, ����ó��

			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isIncluded = 1;
				}
			}
			//�̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
			else
			{
				j--;

			}
		}

		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d", k + 1);

		}
			printf("������ �Ӹ��� �ٸ��ϴ�\n\n");
			if (isIncluded == 1)
			{
				printf(">>���� ! �Ӹ��� ����� !!\n");
			}
			else
			{
				printf(">> ���� ! �Ӹ��� ���� �ʾҾ��..�Ф�\n");
			}
			printf("\n... ��� �Ϸ��� �ƹ�Ű�� ��������...");
			getchar();
		}

		printf("\n\n�߸����� �� �� �ϱ��?");
		scanf_s("%d", &answer);

		if (answer == treatment + 1)
		{
			printf("\n>> �����Դϴ�! \n");
		}
		else
		{
			printf("\n >> �� ! Ʋ�Ⱦ��. ������ %d �Դϴ�.\n",treatment+1);
		
	}
	
	return 0;
}