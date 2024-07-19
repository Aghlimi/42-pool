#include <unistd.h>
int check(char*  text,int j)
{
    int i = 0;
    while (text[i] && i < j)
        if (text[i++] == text[j])
            return 0;
    return 1;
}
int in(char c,char* text)
{
    int i = 0;
    while (text[i] && text[i] != c)
        i ++;
    return text[i] == c;
}
int main(int argc, char  *argv[])
{
    int i = 0,j;
    if(argc == 3)
    while (argv[1][i])
    {
        if (check(argv[1],i) && in(argv[1][i],argv[2]))
            write(1,&argv[1][i],1);
        i ++;
    }
    return 0;
}