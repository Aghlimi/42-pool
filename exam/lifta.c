void c()
{
    int i = 0;
    return;
}
int main(int argc, char const *argv[])
{
    printf("%p\n",c);
    printf("%p\n",*c);
    printf("%p",&c);
    return 0;
}
