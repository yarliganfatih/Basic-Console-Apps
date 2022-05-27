#include <stdio.h>
#include <math.h>

int main()
{
    for(int i=1;i<10000;i++){
        int nDigits = floor(log10(i)) + 1;
        if(nDigits==1){
            if(sqrt(i)==i){
                printf("√%d = %d\n",i,i);  // √x = x
            }
        } else if(nDigits==2){
            int s[2];
            s[0] = i/10;
            s[1] = i%10;
            if(sqrt(i)==s[0] + s[1]){
                printf("√%d = %d + %d\n",i,s[0],s[1]);  // √xy = x + y
            }
        } else if(nDigits==3){
            int s[3];
            s[0] = i/100;
            s[1] = i/10 - 10*s[0];
            s[2] = i%10;
            if(sqrt(i)==s[0] + s[1] + s[2]){
                printf("√%d = %d + %d + %d\n",i,s[0],s[1],s[2]); // √xyz = x + y + z
            }
            int ss[2];
            for(int j=10;j<101;j = j*10){
                ss[0] = i/j;
                ss[1] = i%j;
                if(sqrt(i)==s[0] + s[1]){
                    printf("√%d = %d + %d\n",i,s[0],s[1]);  // √xyz = xy + z | √xyz = x + yz
                }
            }
        }else{
            int s[4];
            s[0] = i/1000;
            s[1] = i/100 - 10*s[0];
            s[2] = i/10 - 10*s[1] - 100*s[0];
            s[3] = i%10;
            if(sqrt(i)==s[0] + s[1] + s[2] + s[3]){
                printf("√%d = %d + %d + %d + %d \n",i,s[0],s[1],s[2],s[3]); // √xyzw = x + y + z + w
            }
            s[0] = i/100;
            s[1] = i/10 - 10*s[0];
            s[2] = i%10;
            if(sqrt(i)==s[0] + s[1] + s[2]){
                printf("√%d = %d + %d + %d \n",i,s[0],s[1],s[2]); // √xyzw = xy + z + w
            }
            s[0] = i/1000;
            s[1] = i/10 - 100*s[0];
            s[2] = i%10;
            if(sqrt(i)==s[0] + s[1] + s[2]){
                printf("√%d = %d + %d + %d \n",i,s[0],s[1],s[2]); // √xyzw = x + yz + w
            }
            s[0] = i/1000;
            s[1] = i/100 - 10*s[0];
            s[2] = i%100;
            if(sqrt(i)==s[0] + s[1] + s[2]){
                printf("√%d = %d + %d + %d \n",i,s[0],s[1],s[2]); // √xyzw = x + y + zw
            }
        }
    }
    
    return 0;
}