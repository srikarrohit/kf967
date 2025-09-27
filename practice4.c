char* addStrings(char* num1, char* num2) {
    int len1=strlen(num1);
    int len2=strlen(num2);
    int i=len1-1;
    int j=len2-1;
    //99 999...1098..4 letter string
    int maxLen=len1>len2?len1:len2;//ternary opertor
    int newArrSize=maxLen+2;
    char *newArr=malloc(newArrSize*sizeof(int));
    int k=newArrSize-2;
    newArr[newArrSize-1]='\0';
    int carry=0;
    while(i>=0 && j>=0){
        int sum=carry+(num1[i--]-'0')+(num2[j--]-'0');
        carry=sum/10;
        sum=sum%10;
        newArr[k--]=sum+'0';
    }
    while(i>=0){
        int sum=carry+(num1[i--]-'0');
        carry=sum/10;
        sum=sum%10;
        newArr[k--]=sum+'0';
    }
    while(j>=0){
        int sum=carry+(num2[j--]-'0');
        carry=sum/10;
        sum=sum%10;
        newArr[k--]=sum+'0';
    }
    while(carry!=0){
        newArr[k--]=carry+'0';
        carry=0;
    }
    if(k==-1){
        return newArr;
    }else{
        return newArr+1;
    }
}