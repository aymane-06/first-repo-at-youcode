#include <stdio.h>
int main(){

int n;
printf("entre un nobmre: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
       int ip=i;
if(ip%2!=0)
printf("%d,",ip);
else if(ip==ip-1)
    continue;
    else printf("%d,",ip+1);

}












return 0;
}
