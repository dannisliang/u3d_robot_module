#include <string>
#include <WinSock2.h>
//#pragma comment(lib, "ws2_32")

// �������� ����� �� char ������
int extractor(char *str, char first, char second);

int extractObj_id(char *str);
int extractX(char *str);
int extractY(char *str);



// ���������� � �������� ��������� �� ������
char *sendAndRec(SOCKET SR, char *mes, int chrec);
// �������� ���� �� ���������� ���������
char *chooseColor(double arg);
// ������� ������ �� ����������
char *crtParamSrting(double *args, int numArgs);
// ������� ���������
char *crtSendSrting(int uniq_id, char *name, char *word, double *args, int numArgs);

int messagePart(SOCKET SR, int uniq_id, int obj_id, double *args, int numArgs, int rcBytes, char *fname, char *fword);

void createWorld(SOCKET SR, int uniq_id, double *args, int numArgs, int rcBytes);
void destroyWorld(SOCKET SR, int uniq_id, int rcBytes);

int createRobot(SOCKET SR, int uniq_id, int obj_id, double *args, int numArgs, int rcBytes);
void deleteRobot(SOCKET SR, int uniq_id, int obj_id, int rcBytes);

int        moveRobot(SOCKET SR, int uniq_id, int obj_id, double *args, int numArgs, int rcBytes);
int changeRobotColor(SOCKET SR, int uniq_id, int obj_id, double *args, int numArgs, int rcBytes);

int reqRobotX(SOCKET SR, int uniq_id, int obj_id, double *args, int numArgs, int rcBytes);
int reqRobotY(SOCKET SR, int uniq_id, int obj_id, double *args, int numArgs, int rcBytes);

int universalRobotMessage(SOCKET SR, int uniq_id, double *args, int numArgs, int rcBytes, char *fname, char *fword);