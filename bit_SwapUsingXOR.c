int main()
{
    int a = 9;
    int b = 7;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d\n", a);
    printf("%d", b);
}
