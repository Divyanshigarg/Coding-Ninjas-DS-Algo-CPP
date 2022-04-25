bool checkPalindrome(char str[]) {
    int j=strlen(str)-1,i=0;
    while(i<j)
    {
        if(str[i]!=str[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

