#include <stdio.h>
int main() {

    double a,b,c,d,e,MEDIA,MEDIA_FINAL;
    scanf ("%lf %lf %lf %lf",&a,&b,&c,&d);
    MEDIA = (a*2+b*3+c*4+d*1)/10.0;
    printf ("MEDIA : %.1lf\n",MEDIA);
        if (MEDIA>=7.0) {
        printf ("Aluno aprovado.\n");
        }
        else if (MEDIA<5.0) {
        printf ("Aluno reprovado.\n");
        }
        else if (MEDIA>=5.0 && MEDIA<=6.9) {
            printf ("Aluno em exame.\n");
            scanf ("%lf",&e);
            printf ("Nota do exame: %.1lf\n",e);
            MEDIA_FINAL = (MEDIA+e)/2.0;
                if (MEDIA_FINAL>=5.0) {
                    printf ("Aluno aprovado.\n");
                }
                else {
                    printf ("Aluno reprovado.\n");
                }
            printf ("MEDIA FINAL: %.1lf\n",MEDIA_FINAL);

        }

    return 0;
}
