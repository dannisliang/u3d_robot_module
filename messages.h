#include <string>
#include <WinSock2.h>
//#pragma comment(lib, "ws2_32")

void initConnection(int Port);


// �������� ����� �� char ������
int extractor(char *str, char first, char second);

int extractString(std::string str, char first, char second);


int extractObj_id(std::string str);
int extractX(std::string str);
int extractY(std::string str);

void testSuccess(char *str);
std::string message(std::string name, std::string params);


std::string initWorld(int x, int y, int z);
std::string destroyWorld();

std::string createRobot(int x, int y, int d_x, int d_y, int d_z, int color);
std::string deleteRobot(int obj_id);

std::string moveRobot(int obj_id, int x, int y, int speed);
std::string colorRobot(int obj_id, int color);

std::string coordsRobotX(int obj_id);
std::string coordsRobotY(int obj_id);