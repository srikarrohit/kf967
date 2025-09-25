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