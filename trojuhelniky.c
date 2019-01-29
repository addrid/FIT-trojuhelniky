#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a=0,b=0,c=0,d=0,e=0,f=0;

  printf("Zadejte velikost stran prveho trojuhelniku:\n");

if(scanf("%lf %lf %lf", &a, &b, &c)!=3 || a<=0 || b<=0 || c<=0 || a+b <= c || a+c <= b || b+c <= a)
 {
                  printf("Nespravny vstup.\n");  
                  return 1;            
 } 


  printf("Zadejte velikost stran druheho trojuhelniku:\n");
if(scanf("%lf %lf %lf", &d, &e, &f)!=3 || d<=0 || e<=0 || f<=0 || d+e <= f || d+f <= e || e+f <= d)
 {
                  printf("Nespravny vstup.\n");  
                  return 1;            
 } 
 
if(((int)((a/d)*1000)==(int)((b/e)*1000)&&(int)((b/e)*1000)==(int)((c/f)*1000))||((int)((a/d)*1000)==(int)((b/f)*1000)&&(int)((b/f)*1000)==(int)((c/e)*1000))||((int)((a/e)*1000)==(int)((b/d)*1000)&&(int)((b/d)*1000)==(int)((c/f)*1000))||((int)((a/e)*1000)==(int)((b/f)*1000)&&(int)((b/f)*1000)==(int)((c/d)*1000))||((int)((a/f)*1000)==(int)((b/d)*1000)&&(int)((b/d)*1000)==(int)((c/e)*1000))||((int)((a/f)*1000)==(int)((b/e)*1000)&&(int)((b/e)*1000)==(int)((c/d)*1000)))
    printf("Trojuhelniky jsou podobne.\n");
else
    printf("Trojuhelniky nejsou podobne.\n");
 
 return 0;
}
