//#include <Windows.h>
#include <iostream>
using namespace std;

int main(void){
	//char pwd[7];
	char dict[64]; 
	char tem[32];
    int index = 0;
    for(int i=0;i<10;i++){
     dict[index++] = '0' + i;
    }
	//for(int i=0;i<10;i++){
 //    dict[index++] = 'A' + i;
 //   }
    int n=index;
    for(int p1=0;p1<n;p1++){
	  for(int p2=0;p2<n;p2++){
		  for(int p3=0;p3<n;p3++){
			  for(int p4=0;p4<n;p4++){
				  for(int p5=0;p5<n;p5++){
					  for(int p6=0;p6<n;p6++){
					    tem[0]=dict[p1];
						tem[1]=dict[p2];
						tem[2]=dict[p3];
						tem[3]=dict[p4];
						tem[4]=dict[p5];
						tem[5]=dict[p6];
                        tem[6] = '\0';
                        cout<<tem<<endl;
					  }
				  }
			  }
         }
	  }
  }
system("pause");
return 0;
}
