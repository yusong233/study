#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FM "C:\\Users\\panli\\Desktop\\CS\\Work\\P5\\Other\\ym\\test\\NP\\b-j_rs.txt"
#define FE "C:\\Users\\panli\\Desktop\\CS\\Work\\P5\\Other\\ym\\test\\NP\\b_j_ply.txt"

#define MAX 20

int main(){
    FILE * fm,*fe ;
    if((fm= fopen(FM, "r"))==NULL){
        printf("%s open error\n",FM);
        return 1;
    }
    if((fe = fopen(FE, "r"))==NULL){
        printf("%s open error\n",FE);
        return 1;
    }

    char ce=0, cm=0, ope=0,opm=0;
    int pcm=0,pce=0,adm=0,ade=0,wde=0,wdm=0;
    int i=0;
AGAIN:
    while(!feof(fm) || !feof(fe)){
        while(1){
            ce = fgetc(fe);
            if(ce=='@')  break;
            if(cm==EOF && ce == EOF)
                goto END;
            if(ce==EOF){
                printf("%d not compare in length, pce: %x\n",i,pce);
                goto END;
            }
        }
        fscanf(fe, "%x: ",&pce);
        ope=fgetc(fe);
        fscanf(fe, "%x <= %x",&ade,&wde);
        if(ope == '$' && ade == 0)
            goto AGAIN;

    while (1){
        cm = fgetc(fm);
        if(cm=='@')  break;
        if(cm==EOF && ce == EOF)
            goto END;
        if(cm==EOF){
            printf("%d not compare in length, pcm: %x\n",i,pcm);
            goto END;
        }
    }
        fscanf(fm, "%x: ",&pcm);
        opm=fgetc(fm);
        fscanf(fm, "%x <= %x",&adm,&wdm);

        if(pce!= pcm )
            printf("%d line %x, pc\n",i,pcm);

        if(ope != opm )
            printf("%d line %x, reg or dm\n",i,pcm);
        if(ade!= adm )
            printf("%d line %x, ad\n",i,pcm);
        if(wde!= wdm ){
            printf("%d line %x, wd\n",i,pcm);
            break;
        }

        i++;
    }
END:
    printf("end\n");
    fclose(fm);
    fclose(fe);
    return 0;

}
