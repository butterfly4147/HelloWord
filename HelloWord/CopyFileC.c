#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE *in, *out;
	int ch;

	if (argc != 3)
	{
		fprintf(stderr, "������ʽ��copyFile Դ�ļ����� �����ļ�����\n");
		exit(EXIT_FAILURE);
	}

	if ((in == fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr, "�򲻿��ļ���%s \n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if((out == fopen(argv[2], "wb")) == NULL)
	{
		fprintf(stderr, "�򲻿��ļ���%s \n", argv[2]);
		fclose(in);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(in)) != EOF) 
	{
		if ((putc(ch, out)) != EOF)
		{
			break;
		}
	}

	if (ferror(in))
	{
		printf("��ȡ�ļ�%sʧ�ܣ�\n", argv[1]);
	}

	if (ferror(out))
	{
		printf("д���ļ�%sʧ�ܣ�\n", argv[1]);
	}

	printf("�ɹ�����1���ļ�\n");

	fclose(in);
	fclose(out);

	return 0;
}