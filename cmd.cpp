/*
-----------------------------非网站复制--------------------------
本程序为Windows的cmd仿真，由吴Wiliam开发，版权所有，请勿盗取！ 
创建日期：2022.2.2    21:28 
-----------------------------非网站复制-------------------------- 
-----------------------------Non Site Replication--------------------------

The simulation program developed by Wu Zhenghan, do not steal the copyright of windows CMD!

Creation date: 2022.2.2 21:28

-----------------------------Non Site Replication--------------------------
*/
#include<bits/stdc++.h>//包含了system
using namespace std;
int main(){
	string a="C:/Users/dell>"; 
	cout<<"Microsoft Windows [版本 10.0.22000.469]"<<endl;
	cout<<"(c) Microsoft Corporation。保留所有权利。"<<endl;
	cout<<endl;
	while(1){
	    cout<<a;
		string s;
		getline(cin,s);
		if(s=="exit"){
			break;//TODO
		}
		else if(s=="C:"||s=="c:"){
			a="C:>";//TODO
		}
		else if(s=="D:"||s=="d:"){
			a="D:/>";//TODO
		}	
		else if(s=="E:"||s=="e:"){
			a="E:/>";//TODO
		}
		else if(s=="F:"||s=="f:"){
			a="F:/>";//TODO
		}
		else if(s=="G:"||s=="g:"){
			a="G:/>";//TODO
		}		
	    system(s.c_str());
		cout<<endl;
	}
	return 0; 
}
