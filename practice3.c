char *ltrim(char *s){
    while(*s==' ')s++;
    return s;
}
char *rtrim(char *s){
    char *back=s+strlen(s);
    while(isspace(*--back));
    *(back+1)='\0';
    return s;
}
int lengthOfLastWord(char* s) {
    char *news=rtrim(ltrim(s));
    char *end=news+strlen(news);
    while(end >= news && !isspace(*end))end--;
    return strlen(end+1);
}

//Vansh's solution
int lengthOfLastWord(char* s) {
int l = 0;
int i = strlen(s)-1;

while (i>=0 && s[i]==' '){
i--;
}
while(i>=0 && s[i]!=' '){
l++;
i--;
}
return l;
}