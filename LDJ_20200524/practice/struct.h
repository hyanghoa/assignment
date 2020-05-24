#pragma once

typedef struct team_info
{
	char leader_yn[20];
	char corp_name[80];
	char name[80];
	char email[80];
	char univ[80];
	char major[80];
}team_info;

int file_open();
void change_str(char str[][1024], char find_str);
void arr_delete(char str[][1024], char find_str);
void arr_token(char str[][1024], char find_str);
void info_save(char str[][1024], team_info info[25]);
void search(team_info info[25]);