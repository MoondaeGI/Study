#include "Header.h"

struct Player
{
	char name[100];
	int level;
	int hp;
	int atk;
};

void save_player_data(Player player, int count);


int main()
{
	struct Player player;
	int player_count = 1;
	int select;
	
	while (1)
	{
		printf("�÷��̾��� ������ �Է��Ͻʽÿ�.\n");
		printf("�̸� / ���� / ü�� / ���ݷ� ������ �ۼ����ֽʽÿ�.\n");
		printf(">> ");
		scanf("%s %d %d %d", &player.name, &player.level, &player.hp, &player.atk);

		printf("�̸�: %s\n����: %d\tü��: %d\t���ݷ�: %d\n", player.name, player.level, player.hp, player.atk);

		printf("�����͸� �����Ͻðڽ��ϱ�? 1: y, 2: n ");
		scanf("%d", &select);
		if (select == 1) {
			save_player_data(player, player_count);
			printf("����Ǿ����ϴ�.\n");
			player_count++;
		}
		else {
			printf("������� �ʾҽ��ϴ�.\n");
		}

		printf("�÷��̾ �ٽ� �ۼ��Ͻðڽ��ϱ�? 1: y, 2: n ");
		scanf("%d", &select);
		if (select != 1) {
			printf("�ۼ� ���α׷��� �����մϴ�.");
			break;
		}
	}

	return 0;
}


void save_player_data(Player player, int count)
{
	char file_name[100];
	sprintf(file_name, "player%d's data.txt", count);

	FILE* fp = fopen(file_name, "w");
	char player_data[500];
	sprintf(player_data, "�̸�: %s\n����: %d\tü��: %d\t���ݷ�: %d\n", player.name, player.level, player.hp, player.atk);
	fputs(player_data, fp);
	fclose(fp);
}


void read_player_data(int count)
{
	char file_name[100];
	sprintf(file_name, "player%d's data.txt", count);

	FILE* fp = fopen(file_name, "r");
	char buffer[500] = {0, };

	fread(buffer, 1, 500, fp);
	printf("%s", buffer);
	fclose(fp);
}