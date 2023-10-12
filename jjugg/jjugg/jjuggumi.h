#ifndef _JJUGGUMI_H_
#define _JJUGGUMI_H_

#include <Windows.h>
#include <stdbool.h>
void gotoxy(int _x, int _y);
void gotoxy(int _x, int _y) {

	COORD pos = { _x,_y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

#define PLAYER_MAX		10
#define DIALOG_DURATION_SEC		4

bool player[PLAYER_MAX];  // 기본값 true, 탈락하면 false
int n_player, n_alive;
int tick;  // 시계
int endd=0;
// 미니게임
void inthor(void);
//void sample(void);//이건 샘플
//void mugunghwa(void);
//void mugunghwa(void);
//void nightgame(void);
//void juldarigi(void);
//void jebi(void);
void ending(void);
int randint(int low, int high);
void Clear(void);

void Clear(void) {
	system("cls");
}
void inthro(void){

	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	Sleep(10);
	printf("■■■■■■■■■■■■■■■■■■■■■□■■■■■■■■\n");
	Sleep(10);
	printf("■■■■□■■■□■■■□□□□□□□■■□■■■■■■■■■■■■■■■■\n");
	Sleep(10);
	printf("■■■□■□■■□■■■■■■□■■■■■□■■■■■■■■■■\n");
	Sleep(10);
	printf("■■□■■■□■□■■■■■□■□■■■■□□□■■■■■■■■■■■\n");
	Sleep(10);
	printf("■■■■■■■■□■■■■□■■■□■■■□■■■■■■■■■■■\n"); 
	Sleep(10);
	printf("■■■■■■■■□■■■□■■■■■□■■□■■■■■■■■■■■\n"); 
	Sleep(10);
	printf("■■■■■■■■■■■■■■■■■□□□□□■■■■■■■■■■■■\n");
	Sleep(10);
	printf("■■■■■■■■■■■■■■■■■■■■■□■■■■■■■■\n");
	Sleep(10);
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	Sleep(1000);
	Clear();
}

void ending(void) {
	if (n_player == 0) {
		printf("종료");
	
		endd = 5;
		
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n"); 
		printf("■■■■■■■□□□□□□□□□□□■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■■■□■■■■■□■■■■■■■■■■\n");
		printf("■■■■■■■■■■■□■■■■■□■■■■■■■■■\n");
		printf("■■■■■■■■■■■□■■■■■□■■■■■■■■■\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■□□□□□□□□□□□□□□□□■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■□□□□□□□□□□■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■□■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■□□□□□□□□□□■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■□■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■□□□□□□□□□□■■■■■■■■■■■■■■■■■■■■\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		Sleep(1000);
	}




}
void dialog(char messsge[]);


void dialog(char messsge[]) {

	
	for (int i = 4; i >= 1; i--) {
		gotoxy(3, 4);
		printf("********************\n");
		gotoxy(3, 5);
		printf("%d %s\n", i,messsge);
		gotoxy(3, 6);
		printf("********************\n");
		Sleep(1000);
	}

}








#endif

