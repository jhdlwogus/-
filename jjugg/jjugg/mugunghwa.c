void draw(void);

int tick = 0;
char map[10][20];






void draw(void) {
	int y = 1;
	while (1) {
		if (_kbihit()) {
			int key = _getch();
			if (key == 'q') { break; }
		}

	}
	if (tick % 100 == 0) {
		// 여기는 뭐들어감?
	}
	Sleep(10);
	tick += 10;


	ststem("cls");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
}