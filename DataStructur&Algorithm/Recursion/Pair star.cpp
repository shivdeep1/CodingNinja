QUES::

Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
xxyy
Sample Output 2:
x*xy*y
Sample Input 3 :
aaaa
Sample Output 3:
a*a*a*a


SOL::

int cal(char input[])
{
    int i=0,len=0;
    for(;input[i]!='\0';i++)
        len++;
    return len;
}
void pair(char input[], char output[], int i,int len,int &output_idx)
{
    
   // cout<<output[output_idx]<<endl;
    
    if(i >=len)
        return;
    
    output[output_idx++]=input[i];
    
    if(i+1 < len && input[i] == input[i+1])
        output[output_idx++] ='*';
    
    pair(input,output,i+1,len,output_idx);
}
void pairStar(char input[]) {
    // Write your code here
    int len=cal(input);
    char output[10000];
    int i=0,output_idx=0;
    pair(input,output,i,len,output_idx);
    i=0;
    for(;i<output_idx;i++)
        input[i]=output[i];
    input[i]='\0';
    
}