#include "Header.h"


// file ����ü
int main()
{
	FILE* file;  // �ܺο��� �������� ���̱� ������ ������
	file = fopen("Sample.txt", "r");  // ���� ���� Sample.txt�� �б� ���� ������

	// ���� �б⸦ �����ϱ� ���� �ʿ��� ��
	// 1. ����
	char buffer[100] = {0, }; // ���� �κп� 0�� �־ �̻��� ���� ������ �� �����ش�
	// 2. ���� ��ü �о����
	fread(buffer, 1, 100, file);
	// 3. ���Ͽ� ���� �����ͷ� �б�
	printf("%s", buffer);
	fclose(file);

	// ���� ����
	FILE* fp = fopen("Sample2.txt", "w");
	fputs("�����и�δپȳ��ϼ���ȳ��ϼ���ȳ��ϼ��������䳪���������糪����(�ȳ��ϼ����)", fp);
	fclose(fp);

	return 0;
}