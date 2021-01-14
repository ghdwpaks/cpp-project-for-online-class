#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include<mmsystem.h>
#include <time.h>
#pragma comment(lib, "winmm.lib")

//#define SOUND_FILE_NAME "C:\\unused_git_workspace\\BuzzerSoundEffect.wav"
#define SOUND_FILE_NAME "BuzzerSoundEffect.wav"
using namespace std;
int main() {


	clock_t start_time = 0;
	clock_t end_time = 0;
	int key_start = 0;
	int key_end = 0;
	int int_rot = 0;
	int a, b, re;
	cout << "분" << endl; 
	cin >> a;
	cout << "초" << endl;
    
	cin >> b;
	re = (((a * 60) + b) * 2) / 3;
	cout << re / 60 << "분" << re % 60 << "초" << endl;

	cout << "시간측정을 시작합니다." << endl;
	start_time = clock();
	while (true)
	{
        system("cls");
		end_time = clock();
		key_start = static_cast<int>(start_time);
		key_end = static_cast<int>(end_time);
		int_rot = (key_end - key_start) / 1000;
		if (int_rot >= re)
		{
			PlaySound(TEXT(SOUND_FILE_NAME), NULL, SND_FILENAME | SND_ASYNC);
			cout << "끝";
			cin >> a;
			break;
			
		}
        printf("목표시간 : %d/%d\n", re / 60, re % 60);
        printf("경과시간 : %d/%d\n", int_rot / 60, int_rot % 60);
        printf("[");
        int stack_t = re / 20;
        while (true)
        {
            if (stack_t * 20 <= int_rot) { printf("####################"); break; }
            else if (stack_t * 19 <= int_rot) { printf("###################-"); break; }
            else if (stack_t * 18 <= int_rot) { printf("##################--"); break; }
            else if (stack_t * 17 <= int_rot) { printf("#################---"); break; }
            else if (stack_t * 16 <= int_rot) { printf("################----"); break; }
            else if (stack_t * 15 <= int_rot) { printf("###############-----"); break; }
            else if (stack_t * 14 <= int_rot) { printf("##############------"); break; }
            else if (stack_t * 13 <= int_rot) { printf("#############-------"); break; }
            else if (stack_t * 12 <= int_rot) { printf("############--------"); break; }
            else if (stack_t * 11 <= int_rot) { printf("###########---------"); break; }
            else if (stack_t * 10 <= int_rot) { printf("##########----------"); break; }
            else if (stack_t * 9 <= int_rot) { printf("#########-----------"); break; }
            else if (stack_t * 8 <= int_rot) { printf("########------------"); break; }
            else if (stack_t * 7 <= int_rot) { printf("#######-------------"); break; }
            else if (stack_t * 6 <= int_rot) { printf("######--------------"); break; }
            else if (stack_t * 5 <= int_rot) { printf("#####---------------"); break; }
            else if (stack_t * 4 <= int_rot) { printf("####----------------"); break; }
            else if (stack_t * 3 <= int_rot) { printf("###-----------------"); break; }
            else if (stack_t * 2 <= int_rot) { printf("##------------------"); break; }
            else if (stack_t <= int_rot) { printf("#-------------------"); break; }
            else
            {
                printf("--------------------");
            }break;
        }
        printf("]");
    Sleep(100);
	}
	return 0;

}