#include <iostream>

using namespace std;

int main(){
     int x;
     int y;
     printf("Masukkan bilangan ke-1: ");
     scanf("%d",&x);
     printf("Masukkan bilangan ke-2: ");
     scanf("%d",&y);
	 if(x>y){
          printf("%d lebih besar daripada %d\n\n",x,y);
     }else if(x==y){
          printf("%d sama besar dengan %d\n\n",x,y);
     }else{
          printf("%d lebih kecil daripada %d\n\n",x,y);
     }
     
     return 0;
}

