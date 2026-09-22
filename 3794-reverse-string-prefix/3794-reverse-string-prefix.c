char* reversePrefix(char* s, int k) {
    int len=strlen(s);
char *s1=malloc((len+1) * sizeof(char));
int j=0;
    for(int i=0;i<k;i++){
       s1[j]=s[k-i-1];
       j++;

    }
    for(int i=k;s[i]!='\0';i++){
       s1[i]=s[i];
    

    }
     s1[len] = '\0';
    return s1;

}