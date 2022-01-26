#include<stdio.h>
#include<string.h>
char str[101];

int check_loop(int start1,int start2)
{
    int i,j,length=0;
    for(i=start1;i<start2;i++)
    {
        for(j=start2;j<start2*2-start1;j++)
        {
            if(str[i]==str[j])
                length++;
        }
    }
    if(length==start2-start1)
        return 1;
    else
        return 0;
}

int main(void)
{
    fgets(str,100,stdin);
    int i,j,k,length[100]={0},min=7;
    for(i=0,k=0;i<strlen(str);i++,k++)
    {
    	for(j=i+1;j<strlen(str);j++)
    	{
    		if(str[i]==str[j])
    		{
    			if(check_loop(i,j))
    			{
    				length[k]=j-i;
    				if(length[k]<min && length[k]>2)
    					min=length[k];
    			}
    		}
    	}
    }
	printf("%d\n",min);
    return 0;
}
