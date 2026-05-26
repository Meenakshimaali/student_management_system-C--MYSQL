#include<iostream>
#include<mysql.h>

using namespace std;
#define HOST "localhost"
#define USER "root"
#define PASS ""
#define DB "meenakshi_diksha"

MYSQL *conn;

void connectDB(){
    conn=mysql_init(NULL);
if(!mysql_real_connect(conn,HOST,USER,PASS,DB,0,NULL,0)){
    cout<<"Connection failed "<<mysql_error(conn)<<endl;
}
else{
    cout<<"Connected Successfully\n";
}
}
void addstudent(){
    string name , course;
    int age;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Course Name: ";
    cin>>course;
    char query[400];

    sprintf(query,"INSERT INTO Students(name,age,course) VALUES('%s','%d','%s')",name.c_str(),age,course.c_str());
    if(mysql_query(conn,query))
        cout<<"Insert Failed:"<<mysql_error(conn)<<endl;
    else
        cout<<"Student Added successfully! "<<endl;
}
void viewstudent(){
   if(mysql_query(conn,"SELECT * FROM students")){
    cout<<"Query Failed!"<<endl;
    return;
   }
   MYSQL_RES *res = mysql_store_result(conn);
   MYSQL_ROW row;

   cout<<"\nID\tName\tAge\tCourse\n";
   cout<<"----------------------------------\n";

   while ((row = mysql_fetch_row(res))){
    cout<<row[0]<<"\t"
        <<row[1]<<"\t"
        <<row[2]<<"\t"
        <<row[3]<<endl;
   }
   mysql_free_result(res);
}
void deletestudent(){
    int id;
    cout<<"Enter Your ID:";
    cin>>id;
    char query[400];
    sprintf(query,"DELETE FROM STUDENTS WHERE ID = %d",id);

    if(mysql_query(conn,query))
cout<<"deletion failed"<<mysql_error(conn)<<endl;
else
    cout<<"Record deleted successfully\n";
}

int main()
{
    connectDB();
   int choice;
    while(true){
       cout<<"----Student Management System -----\n";
       cout<<"------------------------------------\n";
      cout<<"1.Add Student\n";
       cout<<"2.View Student\n";
       cout<<"3.Delete Student\n";
      cout<<"4.Exit\n";
      cin>>choice;
      switch(choice){
  case 1:
    addstudent();
    break;
  case 2:
    viewstudent();
    break;
  case 3:
    deletestudent();
    break;
  case 4:
    cout <<"Thank You!\n";
    return 0;
  default:
    cout<<"invalid chjoice\n";
    }
   cout<<"choice: "<<choice<<endl;
}
return 0;
}
