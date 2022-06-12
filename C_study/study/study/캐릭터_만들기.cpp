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
		printf("플레이어의 정보를 입력하십시오.\n");
		printf("이름 / 레벨 / 체력 / 공격력 순으로 작성해주십시오.\n");
		printf(">> ");
		scanf("%s %d %d %d", &player.name, &player.level, &player.hp, &player.atk);

		printf("이름: %s\n레벨: %d\t체력: %d\t공격력: %d\n", player.name, player.level, player.hp, player.atk);

		printf("데이터를 저장하시겠습니까? 1: y, 2: n ");
		scanf("%d", &select);
		if (select == 1) {
			save_player_data(player, player_count);
			printf("저장되었습니다.\n");
			player_count++;
		}
		else {
			printf("저장되지 않았습니다.\n");
		}

		printf("플래이어를 다시 작성하시겠습니까? 1: y, 2: n ");
		scanf("%d", &select);
		if (select != 1) {
			printf("작성 프로그램을 종료합니다.");
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
	sprintf(player_data, "이름: %s\n레벨: %d\t체력: %d\t공격력: %d\n", player.name, player.level, player.hp, player.atk);
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