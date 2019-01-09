#ifdef __cplusplus
extern "C"  {
#endif
#include "acllib.h"
#include "sqlite3.h"
#include <stdio.h>
#ifdef __cplusplus
}
#endif
#include<iostream>
#include<string>
#include <time.h>
using namespace std;
void mouseListener0(int x , int y ,int button ,int event);
void mouseListener1(int x , int y ,int button ,int event);
void mouseListener2(int x , int y ,int button ,int event);
void mouseListener3(int x , int y ,int button ,int event);
void mouseListener4(int x , int y ,int button ,int event);
int showIndex();
string sql1 = "";
string sql2 = "";
string sql3 = "";
string sql4 = "";
bool flag = false;
string zuowei = "";
int i = -1;
int j = -1;
int prei = -1;
int prej = -1;
int mode = 0;
sqlite3 *db;
char *zErrMsg = 0;
int rc;
char *sql;
const char* data = "";

static int callback(void *data, int argc, char **argv, char **azColName)
{
    zuowei = "";
    int i;
    for(i=0; i<argc; i++)
    {
        zuowei = zuowei + argv[i];
    }
    cout<<zuowei<<endl;
    return 0;
}

static int callback0(void *data, int argc, char **argv, char **azColName)
{
    return 0;
}

int Show1()
{
    rc = sqlite3_open("1.db", &db);
    sql = "SELECT * from t1";
    rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
    sqlite3_close(db);

    beginPaint();
    setPenStyle(PEN_STYLE_SOLID);
        setBrushColor(BLACK);
    rectangle(0,0,800,600);
    setTextColor(RGB(0,161,241));
    paintText(100,550,"确认选座");
    setTextColor(RGB(255,187,0));
    paintText(500,550,"返回大厅");
    setPenColor(WHITE);

    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
             if(zuowei[i*10+j+i]=='0')
            {
                setBrushColor(RGB(128,64,0));
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }
            else if(zuowei[i*10+j+i]=='1')
            {
                setBrushColor(WHITE);
                setPenColor(BLACK);
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }
        }
    }
    setTextColor(RED);
    paintText(630,40,"图示");
    setBrushColor(RGB(128,64,0));
    rectangle(550,100,600,150);
    setTextColor(RGB(246,83,20));
    paintText(600,100,"已售出");
    setBrushColor(WHITE);
    rectangle(550,160,600,210);
    paintText(600,160,"未售出");
    endPaint();
    registerMouseEvent(mouseListener1);
}

int Show2()
{
    rc = sqlite3_open("1.db", &db);
    sql = "SELECT * from t2";
    rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
    sqlite3_close(db);

    beginPaint();
    setPenStyle(PEN_STYLE_SOLID);
        setBrushColor(BLACK);
    rectangle(0,0,800,600);
    setTextColor(RGB(0,161,241));
    paintText(100,550,"确认选座");
    setTextColor(RGB(255,187,0));
    paintText(500,550,"返回大厅");
    setPenColor(WHITE);

    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
             if(zuowei[i*10+j+i]=='0')
            {
                setBrushColor(RGB(128,64,0));
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }
            else if(zuowei[i*10+j+i]=='1')
            {
                setBrushColor(WHITE);
                setPenColor(BLACK);
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }

        }
    }
        setTextColor(RED);
    paintText(630,40,"图示");
    setBrushColor(RGB(128,64,0));
    rectangle(550,100,600,150);
    setTextColor(RGB(246,83,20));
    paintText(600,100,"已售出");
    setBrushColor(WHITE);
    rectangle(550,160,600,210);
    paintText(600,160,"未售出");
    endPaint();
    registerMouseEvent(mouseListener2);
}

int Show3()
{
     rc = sqlite3_open("1.db", &db);
    sql = "SELECT * from t3";
    rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
    sqlite3_close(db);

    beginPaint();
    setPenStyle(PEN_STYLE_SOLID);
        setBrushColor(BLACK);
    rectangle(0,0,800,600);
    setTextColor(RGB(0,161,241));
    paintText(100,550,"确认选座");
    setTextColor(RGB(255,187,0));
    paintText(500,550,"返回大厅");
    setPenColor(WHITE);

    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
             if(zuowei[i*10+j+i]=='0')
            {
                setBrushColor(RGB(128,64,0));
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }
            else if(zuowei[i*10+j+i]=='1')
            {
                setBrushColor(WHITE);
                setPenColor(BLACK);
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }

        }
    }
        setTextColor(RED);
    paintText(630,40,"图示");
    setBrushColor(RGB(128,64,0));
    rectangle(550,100,600,150);
    setTextColor(RGB(246,83,20));
    paintText(600,100,"已售出");
    setBrushColor(WHITE);
    rectangle(550,160,600,210);
    paintText(600,160,"未售出");
    endPaint();
    registerMouseEvent(mouseListener3);
}

int Show4()
{
     rc = sqlite3_open("1.db", &db);
    sql = "SELECT * from t4";
    rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
    sqlite3_close(db);

    beginPaint();
    setPenStyle(PEN_STYLE_SOLID);
        setBrushColor(BLACK);
    rectangle(0,0,800,600);
    setTextColor(RGB(0,161,241));
    paintText(100,550,"确认选座");
    setTextColor(RGB(255,187,0));
    paintText(500,550,"返回大厅");
    setPenColor(WHITE);

    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
             if(zuowei[i*10+j+i]=='0')
            {
                setBrushColor(RGB(128,64,0));
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }
            else if(zuowei[i*10+j+i]=='1')
            {
                setBrushColor(WHITE);
                setPenColor(BLACK);
                rectangle(j*50,i*50,j*50+50,i*50+50);
            }

        }
    }
        setTextColor(RED);
    paintText(630,40,"图示");
    setBrushColor(RGB(128,64,0));
    rectangle(550,100,600,150);
    setTextColor(RGB(246,83,20));
    paintText(600,100,"已售出");
    setBrushColor(WHITE);
    rectangle(550,160,600,210);
    paintText(600,160,"未售出");
    endPaint();
    registerMouseEvent(mouseListener4);
}

void mouseListener0(int x , int y ,int button ,int event)
{
    cout<<x<<" "<<y<<endl;
    if(x>650 &&x<750 &&y>120 &&y<167 && button == 1 && event == 0 &&mode == 0)
    {
        Show1();
        mode = 1;
    }
    else if(x>650 &&x<750 &&y>250 &&y<297 && button == 1 && event == 0 &&mode == 0)
    {
        Show2();
        mode = 2;
    }
    else if(x>650 &&x<750 &&y>380 &&y<427 && button == 1 && event == 0 &&mode == 0)
    {
        Show3();
        mode = 3;
    }
    else if(x>650 &&x<750 &&y>510 &&y<557 && button == 1 && event == 0 &&mode == 0)
    {
        Show4();
        mode = 4;
    }
}

void mouseListener1(int x , int y ,int button ,int event)
{
    if(x>0 && y>0 && x<500 &&y<500 &&button ==1 && event == 0)
    {
        if(zuowei[x/50*10+y/50+y/50]!='0')
        {
            prei = i;
            prej = j;
        }
        j = x/50;
        i = y/50;
        if(zuowei[i*10+j+i]=='1')
        {
            beginPaint();
            if(prei != -1 && prej != -1 &&zuowei[prei*10+prej+prei]!='0' )
            {
                setBrushColor(WHITE);
                rectangle(prej*50,prei*50,prej*50+50,prei*50+50);
            }
            setBrushColor(RED);
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
        }
    }
   else  if(x>500 && y>550 && x<700 &&y<600 &&button ==1 && event == 0)
    {
        //返回
        mode = 0;
        beginPaint();
        setBrushColor(WHITE);
        setPenColor(WHITE);
        rectangle(0,0,800,600);
        endPaint();
        showIndex();
    }
    else if(x>100 && y>500 && x<300 &&y<600 &&button ==1 && event == 0)
    {
        //购买
        if(i != -1 && j != -1)
        {
            zuowei[i*10+j+i]='0';
            beginPaint();
            setBrushColor(RGB(128,64,0));
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
            i = -1;
            j= -1;
            rc = sqlite3_open("1.db", &db);
            sql1 = "UPDATE t1 set zuowei = \'";
            sql1 = sql1+zuowei;
            sql1 = sql1+"\'";
            const char* p1 = sql1.data();
            rc = sqlite3_exec(db, p1, callback0, (void*)data, &zErrMsg);
            sqlite3_close(db);
            if(rc){
                MessageBox(NULL, "购买失败!", "提示", MB_ICONERROR);
            }
            else{
                MessageBox(NULL, "购买成功!", "提示", MB_OK);
            }
        }
    }
}

void mouseListener2(int x , int y ,int button ,int event)
{
      if(x>0 && y>0 && x<500 &&y<500 &&button ==1 && event == 0)
    {
        if(zuowei[x/50*10+y/50+y/50]!='0')
        {
            prei = i;
            prej = j;
        }
        j = x/50;
        i = y/50;
        if(zuowei[i*10+j+i]=='1')
        {
            beginPaint();
            if(prei != -1 && prej != -1 &&zuowei[prei*10+prej+prei]!='0' )
            {
                setBrushColor(WHITE);
                rectangle(prej*50,prei*50,prej*50+50,prei*50+50);
            }
            setBrushColor(RED);
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
        }
    }
   else  if(x>500 && y>550 && x<700 &&y<600 &&button ==1 && event == 0)
    {
        //返回
        mode = 0;
        beginPaint();
        setBrushColor(WHITE);
        setPenColor(WHITE);
        rectangle(0,0,800,600);
        endPaint();
        showIndex();
    }
    else if(x>100 && y>500 && x<300 &&y<600 &&button ==1 && event == 0)
    {
        //购买
        if(i != -1 && j != -1)
        {
            zuowei[i*10+j+i]='0';
            beginPaint();
            setBrushColor(RGB(128,64,0));
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
            i = -1;
            j= -1;
            rc = sqlite3_open("1.db", &db);
            sql1 = "UPDATE t2 set zuowei = \'";
            sql1 = sql1+zuowei;
            sql1 = sql1+"\'";
            const char* p1 = sql1.data();
            rc = sqlite3_exec(db, p1, callback0, (void*)data, &zErrMsg);
            sqlite3_close(db);
                        if(rc){
                MessageBox(NULL, "购买失败!", "提示", MB_ICONERROR);
            }
            else{
                MessageBox(NULL, "购买成功!", "提示", MB_OK);
            }
        }
    }
}

void mouseListener3(int x , int y ,int button ,int event)
{
       if(x>0 && y>0 && x<500 &&y<500 &&button ==1 && event == 0)
    {
        if(zuowei[x/50*10+y/50+y/50]!='0')
        {
            prei = i;
            prej = j;
        }
        j = x/50;
        i = y/50;
        if(zuowei[i*10+j+i]=='1')
        {
            beginPaint();
            if(prei != -1 && prej != -1 &&zuowei[prei*10+prej+prei]!='0' )
            {
                setBrushColor(WHITE);
                rectangle(prej*50,prei*50,prej*50+50,prei*50+50);
            }
            setBrushColor(RED);
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
        }
    }
   else  if(x>500 && y>550 && x<700 &&y<600 &&button ==1 && event == 0)
    {
        //返回
        mode = 0;
        beginPaint();
        setBrushColor(WHITE);
        setPenColor(WHITE);
        rectangle(0,0,800,600);
        endPaint();
        showIndex();
    }
    else if(x>100 && y>500 && x<300 &&y<600 &&button ==1 && event == 0)
    {
        //购买
        if(i != -1 && j != -1)
        {
            zuowei[i*10+j+i]='0';
            beginPaint();
            setBrushColor(RGB(128,64,0));
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
            i = -1;
            j= -1;
            rc = sqlite3_open("1.db", &db);
            sql1 = "UPDATE t3 set zuowei = \'";
            sql1 = sql1+zuowei;
            sql1 = sql1+"\'";
            const char* p1 = sql1.data();
            rc = sqlite3_exec(db, p1, callback0, (void*)data, &zErrMsg);
            sqlite3_close(db);
        }
                    if(rc){
                MessageBox(NULL, "购买失败!", "提示", MB_ICONERROR);
            }
            else{
                MessageBox(NULL, "购买成功!", "提示", MB_OK);
            }
    }
}

void mouseListener4(int x , int y ,int button ,int event)
{
      if(x>0 && y>0 && x<500 &&y<500 &&button ==1 && event == 0)
    {
        if(zuowei[x/50*10+y/50+y/50]!='0')
        {
            prei = i;
            prej = j;
        }
        j = x/50;
        i = y/50;
        if(zuowei[i*10+j+i]=='1')
        {
            beginPaint();
            if(prei != -1 && prej != -1 &&zuowei[prei*10+prej+prei]!='0' )
            {
                setBrushColor(WHITE);
                rectangle(prej*50,prei*50,prej*50+50,prei*50+50);
            }
            setBrushColor(RED);
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
        }
    }
   else  if(x>500 && y>550 && x<700 &&y<600 &&button ==1 && event == 0)
    {
        //返回
        mode = 0;
        beginPaint();
        setBrushColor(WHITE);
        setPenColor(WHITE);
        rectangle(0,0,800,600);
        endPaint();
        showIndex();
    }
    else if(x>100 && y>500 && x<300 &&y<600 &&button ==1 && event == 0)
    {
        //购买
        if(i != -1 && j != -1)
        {
            zuowei[i*10+j+i]='0';
            beginPaint();
            setBrushColor(RGB(128,64,0));
            rectangle(j*50,i*50,j*50+50,i*50+50);
            endPaint();
            i = -1;
            j= -1;
            rc = sqlite3_open("1.db", &db);
            sql1 = "UPDATE t4 set zuowei = \'";
            sql1 = sql1+zuowei;
            sql1 = sql1+"\'";
            const char* p1 = sql1.data();
            rc = sqlite3_exec(db, p1, callback0, (void*)data, &zErrMsg);
            sqlite3_close(db);
        }
                    if(rc){
                MessageBox(NULL, "购买失败!", "提示", MB_ICONERROR);
            }
            else{
                MessageBox(NULL, "购买成功!", "提示", MB_OK);
            }
    }
}


int showIndex()
{
    mode = 0;
    beginPaint();
    setTextBkColor(EMPTY);
    setPenColor(BLACK);
    setPenStyle(PEN_STYLE_DASH);
    line(0,80,800,80);
    line(0,210,800,210);
    line(0,340,800,340);
    line(0,470,800,470);
    setTextSize(30);
    setTextColor(BLACK);
    paintText(230,40,"请选择你要看的电影场次");

    setTextSize(50);
    setTextColor(RGB(246,83,20));
    paintText(5,120,"8.7");
    setTextSize(30);
    setTextColor(BLACK);
    paintText(100,100,"来电狂响");
    setTextColor(RGB(96,96,96));
    paintText(100,150,"剧情 喜剧");
    setTextColor(RGB(255,187,0));
    paintText(300,100,"中国大陆/103分钟");
    setTextColor(RGB(124,187,0));
    setTextSize(50);
    paintText(650,120,"查看");

    setTextSize(50);
    setTextColor(RGB(246,83,20));
    paintText(5,250,"9.1");
    setTextSize(30);
    setTextColor(BLACK);
    paintText(100,230,"大黄蜂");
    setTextColor(RGB(96,96,96));
    paintText(100,280,"动作 冒险 科幻");
    setTextColor(RGB(255,187,0));
    paintText(300,230,"美国/114分钟");
    setTextColor(RGB(124,187,0));
    setTextSize(50);
    paintText(650,250,"查看");

    setTextSize(50);
    setTextColor(RGB(246,83,20));
    paintText(5,380,"9.4");
    setTextSize(30);
    setTextColor(BLACK);
    paintText(100,360,"海王");
    setTextColor(RGB(96,96,96));
    paintText(100,410,"动作 冒险 奇幻");
    setTextColor(RGB(255,187,0));
    paintText(300,360,"美国/143分钟");
    setTextColor(RGB(124,187,0));
    setTextSize(50);
    paintText(650,380,"查看");

    setTextSize(50);
    setTextColor(RGB(246,83,20));
    paintText(5,510,"8.7");
    setTextSize(30);
    setTextColor(BLACK);
    paintText(100,490,"蜘蛛侠");
    setTextColor(RGB(96,96,96));
    paintText(100,540,"动画 动作 科幻");
    setTextColor(RGB(255,187,0));
    paintText(300,490,"美国/116分钟");
    setTextColor(RGB(124,187,0));
    setTextSize(50);
    paintText(650,510,"查看");

    endPaint();
    registerMouseEvent(mouseListener0);
}

int Setup()
{
    mode = 0;
    initWindow("电影院售票系统",DEFAULT,DEFAULT,800,600);
    showIndex();
    return 0;
}
