
#include "variable.h"
int flag=0;
int code=0;
int main(void)
{
	ALL_Init();//全部外设初始化
	TLY_init();//陀螺仪函数初始化
	pill_Servo(3,95);
	Set_angle(SERVO_S_1,SERVO_S_2,SERVO_S_3,SERVO_S_4);
	
	//测试
//	int pdf_count=0;
//	while(1){
//		//motion(0,0,0,300);
//		//printf("%d\n",Encoder_Timer3_sum);
//		printf("%d %d %d %d %d %d %d %d\n",Sonic_Dis.A_1,Sonic_Dis.A_2,Sonic_Dis.A_3,Sonic_Dis.A_4,Sonic_Dis.A_5,Sonic_Dis.A_6,Sonic_Dis.A_7,Sonic_Dis.A_8);
//		delay_ms(10);
//	}
	
    //USART_SendData(USART1,1);
//舵机开机竖着
	//Set_angle(SERVO_B_1,SERVO_B_2,SERVO_B_3,SERVO_B_4);
//Set_angle(98,58,45,126); //横着
	//二维码数据
	
//	while(1)
//	{
//		pill_Servo(165,180);
//	}

//		while(1)
//	{
//		if(	QR_code=='1' ||\
//				QR_code=='2' ||\
//				QR_code=='3' ||\
//				QR_code=='4' ||\
//				QR_code=='5' )
//		USART_Cmd(USART1, DISABLE);
//		switch(QR_code)
//		{
//			case '1' :code=1;break;
//			case '2' :code=2;break;
//			case '3' :code=3;break;
//			case '4' :code=4;break;
//			case '5' :code=5;break;
//			default : code=0; break;
//		}
//		if(code!=0) break;
//	}
//		printf("%d",code);
//    OLED_ShowIntNum(0,10,code,5,8,1);
//		delay_ms(500);


	while(1)	
	{
//		printf("%lf",YAW);
		if(KEY1==0) //KEY 跑垄	
		{
//		
//		USART_Cmd(USART3, DISABLE);
//		USART_Cmd(UART4, DISABLE);
//		empt=0;
		Car_run_1();
		Car_run_2();
		Car_run_3();
		Car_run_4();
		Car_run_5();
		Car_run_6();
		Car_run_7();
		Car_run_8();
		Car_run_9();
		Car_run_10();
		Car_run_11();
		Car_run_12();
		flag=13;
		}
		
		if(KEY2==0) //KEY 作业	
		{
		uart3_init(9600);
		uart4_init(9600);
		Car_run_1();
		Car_run_2();
		Car_run_3();
		Car_run_4();
		Car_run_5();
		Car_run_6();
		Car_run_7();
		Car_run_8();
		Car_run_9();
		Car_run_10();
		Car_run_11();
		Car_run_12();
		flag=13;
		}
		else motion(0,0,0,0);
		
	}
	
	return 0;
}		
