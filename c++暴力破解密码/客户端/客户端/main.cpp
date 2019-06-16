#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

int main(void){
 string paw;
 while(1){
  cout<<"ÇëÊäÈëÃÜÂë:";
  cin>>paw;
  if(paw=="123456"){
	  break;
  }else{
   cout<<"ÊäÈëÃÜÂëÓÐÎó"<<endl;
  }
 }
 cout<<"µÇÂ¼³É¹¦..."<<endl;
 cout<<"ÊäÈëµÄÃÜÂëÊÇ:"<<paw<<endl;
 system("pause");
 return 0;
}