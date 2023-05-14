#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <vector>
#include <fstream>
using namespace std;


struct Diem
{
	int score1;
	int score2;
};

struct _Point
{
	// Tọa độ x y trên bàn cờ
	int _x;
	int _y;

	// Biến nhận biết X và O ( -1 = X , 1 = O, 0 = Ô trống )
	int _check;

};

static _Point** _pArr;

// Cài đặt biến _check
bool setCheck(int pCheck, int i, int j);
// Lấy giá trị của _x
int getX(int i, int j);
// Lấy giá trị của _y
int getY(int i, int j);
// Lấy giá trị của _check
int getCheck(int i, int j);
// Cài đặt biến _x
void setX(int pX, int i, int j);
// Cài đặt biến _y
void setY(int pY, int i, int j);

_Point Tim_Kiem_NuocDi_1(); // Tìm nước đi cho máy

struct _Board
{
	// Kích thước bàn cờ (size x size)
	int _size;
	// Tọa độ phía bên trái và trên bàn cờ.
	int _left;
	int _top;


	// Mảng 2 chiều để chuyển đổi tọa độ (x,y) thành các ô trong mảng 2 chiều.
	int CountX; // Đếm nước cờ X
	int CountY; // Đếm nước cờ O
};
static _Board* _b;		// Khởi tạo 1 bàn cờ

// Lấy giá trị _size
template <class T>
int getSize(T* _b);
// Lấy giá trị _left
template <class T>
int getLeft(T* _b);
// Lấy giá trị _top
template <class T>
int getTop(T* _b);
// Lấy tọa độ x,y tại vị trí i,j trên bàn cờ mảng 2 chiều _pArr
int getXAt(int, int);
int getYAt(int, int);
// Lấy giá trị _check trên mảng 2 chiều . nhận biết X O và ô trống.
static int get_Check(int i, int j) { return getCheck(i, j); }
// Load dữ liệu 
void loadData(int, int, int);
// Reset bàn cờ cho tất cả các ô trống _check = 0.
void resetData();
// Kiểm tra X hay O
int checkBoard(int, int, bool);
// Kiểm tra thắng thua trên bàn cờ
int testBoard(int x, int y);


long SoDiemTanCong_DuyetDoc(long, long, const long Defend_Score[], const long Attack_Score[]);
long SoDiemTanCong_DuyetNgang(long, long, const long Defend_Score[], const long Attack_Score[]);
long SoDiemTanCong_DuyetCheo1(long, long, const long Defend_Score[], const long Attack_Score[]);
long SoDiemTanCong_DuyetCheo2(long, long, const long Defend_Score[], const long Attack_Score[]);
long SoDiemPhongThu_DuyetDoc(long, long, const long Defend_Score[], const long Attack_Score[]);
long SoDiemPhongThu_DuyetNgang(long, long, const long Defend_Score[], const long Attack_Score[]);
long SoDiemPhongThu_DuyetCheo1(long, long, const long Defend_Score[], const long Attack_Score[]);
long SoDiemPhongThu_DuyetCheo2(long, long, const long Defend_Score[], const long Attack_Score[]);
// Duyệt Các Ô Trống tính điểm cho từng ô theo dọc , ngang , chéo ngược , chéo xuôi.

// Kiểm tra thắng theo dòng
int checkWinRow(int x, int y, int value); // value (-1 hoac 1) hay X hoac O
// Kiểm tra thắng theo cột
int checkWinCol(int x, int y, int value);
// Kiểm tra thắng theo đường chéo thứ 1
int checkfirstDiagonal(int x, int y, int value);
// Kiểm tra thắng theo đường chéo thứ 2
int checksecondDiagonal(int x, int y, int value);


struct _Game
{

	bool _turn;		       // True là lượt người chơi 1 , false là người chơi 2.
	int _x, _y;		      // Tọa độ
	bool _loop;		      // True chơi tiếp, False out.
	int scorep1;         // Số trận thắng P1
	int scorep2;		// Số trận thắng P2
	int chedo;			// Đọc file để nhận biết chế độ chơi
	// -31 : Chế độ P vs P đang đến lượt X
	// -30 : Chế độ P vs P đang đến lượt O
	// -4  : Chế độ P vs Bot (Dễ) đang đến lượt X
	// -5  : Chế độ P vs Bot (Khó) đang đến lượt X

	// Đêm số lương x y trong bàn cờ 
	int CountX;
	int CountY;

	// biến để hiện trước x o đi trước
	bool _changeTurn;
	bool _showCursor;
};
static _Game* g;


// Lấy tỉ số thắng 
static int getScore1() { return g->scorep1; }
static int getScore2() { return g->scorep2; }
// Cài đặt tỉ số thắng = 0 .
static void setScore1() { g->scorep1 = 0; }
static void setScore2() { g->scorep2 = 0; }
// Trò chơi tiếp tục
static bool isContinue();
// Chơi lại hay không ?
static char askContinue();
//box hỏi 
void Box();

void startGame(); // Khởi tạo game . Bắt đầu game 
void exitGame(); // Thoát Game
void SaveGame(int n);  // Lưu Game đang chơi với biến n là chế độ và lượt .
void LoadGame(char data[30]); // Khởi tạo game . Bắt đầu game ( trường hợp Load Game ) 
void LichSuGame(int n);

// Kiểm tra thắng thua - tiếp tục
int processFinish(int x, int y);
// Đánh dấu X và O trên bàn cờ
bool processCheckBoard();

// Di chuyển lên - xuống - trái - phải
void moveRight();
void moveLeft();
void moveUp();
void moveDown();

// Cài đặt biến _x _y 
static void gsetX(int x) { g->_x = x; }
static void gsetY(int y) { g->_y = y; }

// Lấy giá trị _x _y 
int getXatEnter();
int getYatEnter();
// Lấy giá trị của lượt chơi .
static bool getTurn() { return g->_turn; }

// Đảo lượt chơi
static void setTurn() { g->_turn = !g->_turn; }
// Tìm kiếm nước đi cho máy
void TimKiemNuocDi();
// Đếm nước cờ đã đi được
int DemNuocCoDaDi();
// set up các chỉ cho biến ở struct game
static void setGame(int pSize, int pLeft, int  pTop);
// cài đặt số x y = 0
template <class T>
static void gsetCountXY(T* g);



const long Defend_Score1[7] = { 0, 72, 9216, 589824, 37748736, 2415919104 };
const long Attack_Score1[7] = { 0, 576, 73728, 4718592, 301989888, 19327352832 };


//const  long Defend_Score1[7] = { 0, 8, 512, 32768, 2097152, 134217728 };
//const  long Attack_Score1[7] = { 0, 64, 4096, 262144, 16777216, 1073741824 };
// số nhỏ hơn cho game


int PlayerVsCom(Diem& a, int, char data[30]); // BOT
int PlayerVsPlayer(Diem& a, int, char data[30]); // P VS P

// hàm tắt của PVP và PVC
void PvPaskForRestart(Diem& a, int& load, char data[30]);
void PvCaskForRestart(Diem& a, int& load, char data[30]);

static int input = -1;

// xóa dòng
void clearConsoleLine(int y);

// các hàm xây dựng show x y trước khi đánh tại vị trí trỏ tới
void printTurnSymbol();
int getCheckAtXY(int pX, int pY);
void showCursor(bool show);
