void copy_string(char *str, char cstr[])
{
    int i=0;
    while (cstr[i]!='\0')
    {
        str[i]=cstr[i];
        i++;
    }
    str[i]='\0';

}
