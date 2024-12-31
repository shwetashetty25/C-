#include<iostream>
using namespace std;
int main()
{
    int marks=60;
    if (marks>=90){ 
        cout<<"GRADE A"<<endl;
    }
else if (marks>=80){
    cout<<"GRADE B"<<endl;
}
else if (marks>=70){
    cout<<"GRADE C"<<endl; 
}
else if (marks>=50){
    cout<<"GRADE D"<<endl;
}
else{
    cout<<"FAIL"<<endl;
}
return 0;
}
