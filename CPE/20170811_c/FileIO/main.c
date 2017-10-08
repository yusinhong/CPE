/*#include <stdio.h>


int main(){
    char str[100];
    FILE *fp_in = fopen("text.txt","w");
    FILE *fp_out = fopen("output.txt","w");

    fprintf(fp_in,"HaHaHa~I'mhero\n");
    fclose(fp_in);
    fp_in = fopen("text.txt","r");
    fscanf(fp_in,"%s",str);
    fprintf(fp_out,"%s", str);
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
*/
/*#include <stdio.h>

int main()
{
    int i;
    FILE *in=fopen("aaa.txt","a");

    for(i=0;i<5;i++)
    {
        fprintf(in,"1");
    }
    fclose(in);
    in=fopen("aaa.txt","a");
    for(i=0;i<5;i++)
    {
        fprintf(in,"2");
    }
    fclose(in);
    in=fopen("aaa.txt","a");
    for(i=0;i<5;i++)
    {
        fprintf(in,"3");
    }
    fclose(in);
}*/

