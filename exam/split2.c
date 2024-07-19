#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		*(dest + i) = *(src + i);
		i ++;
	}
	*(dest + i) = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
    char    *text;

    text = malloc(ft_strlen(src) + 1);
    ft_strcpy(text,src);
    return (text);
}

char* sub(char* text,int index,int length)
{
    char* n = malloc(length - index);
    int i = 0;
    while(index < length)
    {
        n[i ++] = text[index ++];
    }
    return n;
}
size_t
char** split(char* text)
{
    int i = 0;
    int j = 0;
    int size = 0;
    int number_sep = 0;
    int index = 0;
    while (text[i])
    {
        if (text[i] == 32 || text[i] == '\t' || text[i] == 10)
                number_sep ++;
        i ++;
    }
    char **list;
    list = malloc((number_sep + 1) * sizeof(char*));
    i = 0;
    j = 0;
    while (text[i])
    {
        if (text[i] == 32 || text[i] == '\t' || text[i] == 10)
        {
            if(index < i - 1){
                list[size ++] = ft_strdup(sub(text,index,i));
                index = i + 1;
            }else{
                list[size ++] = ft_strdup("");
                index = i + 1;
            }
        }
        i ++;
    }
    list[size ++] = ft_strdup(sub(text,index,i));
    return list;
}
int main()
{
    char* text = "ga aaaaa";
    char** list = split(text);
    int i = 0;
    while(list[i])
    {
        printf("|%s|\n",list[i ++]);
    }
}