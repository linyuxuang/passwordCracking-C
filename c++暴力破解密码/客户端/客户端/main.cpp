#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

int main(void){
 string paw;
 while(1){
  cout<<"����������:";
  cin>>paw;
  if(paw=="123456"){
	  break;
  }else{
   cout<<"������������"<<endl;
  }
 }
 cout<<"��¼�ɹ�..."<<endl;
 cout<<"�����������:"<<paw<<endl;
 system("pause");
 return 0;
}