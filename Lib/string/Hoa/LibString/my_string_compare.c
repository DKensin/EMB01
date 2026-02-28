int compare_string (char *str1,char *str2)
{
    int i = 0;
    int check = 1;
    while ((str1[i]!='\0')||(str2[i]='\0'))
    {
        if(str1[i]!=str2[i])
        {
            check=0;
            break;
        }
        i++;
    }
    return check;
    

}
