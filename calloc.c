/*
	�������ܣ�ʹ��malloc��������дcalloc������ԭ��
	���Ҳ���
	�������ԣ��������ܿ���ʵ�֣�������뱻�ϴ�
*/
#include <stdio.h>
#include <stdlib.h>
void *my_calloc(size_t nums, size_t element_size)
{
	int i ,all_size;
	all_size = nums * element_size;
	char *p =NULL;
	p = malloc(all_size);
	if(p == NULL)
		return NULL;
	for(i =0;i <all_size;i++ )
	{
		p[i]  = 0;
	}
	return p;
}
int main()
{
	char *p =my_calloc(5,sizeof(char));
	int i = 0;
	if(p != NULL)
	{
		for(i = 0;i<5;i++)
		{
			printf("p[%d] is %d\n",i,p[i]);
		}
		free(p);
	}
	int *p_int = my_calloc(10,sizeof(int));
	if(p_int != NULL)
	{
		for(i =0;i<5;i++)
		{
			printf("p_int[%d] is %d\n",i,p_int[i]);
		}
		free(p_int);
	}
			
	return 0;
}
