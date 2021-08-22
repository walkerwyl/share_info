#ifndef _USER_H
#define _USER_H

typedef struct user
{
    int user_status;
    const char * user_ip;
} User;

typedef struct
{
    User * user_list[12];
} UserList;

//从配置文件中获得当前参与小组跳板机的IP列表
void InitUserList()
{
    FILE * fp = fopen("userlist.txt","r");
    UserList L;
    fclose(fp);
}

#endif
