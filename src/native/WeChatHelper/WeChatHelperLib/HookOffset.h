#pragma once
//ƫ�Ƶ�ַ����

#if WECHAT_VERSION == 26852

#define offset_LoginSign 0x126D860		//��½��־λ

#define offset_ReciveMessage 0x315E98-5			//������Ϣ
#define offset_ReciveMessageParam 0x126D7F8		//������Ϣ�Ĳ���
#define offset_ReciveMessageParam_MsgType 0x30 //��Ϣ����
#define offset_ReciveMessageParam_MsgSourceType 0x34 //��Ϣ��Դ����
#define offset_ReciveMessageParam_MsgReciver 0x40 //��Ϣ�Ľ�����
#define offset_ReciveMessageParam_MsgContent 0x68 //��Ϣ����
#define offset_ReciveMessageParam_MsgSender 0x114 //��Ϣ�ķ�����

#define offset_QrCode 0x1F110B			//��ά��
#define offset_QrCodeContect 0x127F618	//��ά������

#define offset_GoToQrCode1 0x1EEE30			//��ת����ά��
#define offset_GoToQrCode2 0x2E3070			//��ת����ά��

#define offset_WxAntiRevoke 0x312565			//������

#elif WECHAT_VERSION == 27188

#define offset_LoginSign 0x0	//��¼��־λ

#define offset_ReciveMessage 0x325373		//������Ϣ
#define offset_ReciveMessageParam 0x13971B8		//������Ϣ�Ĳ���
#define offset_ReciveMessageParam_MsgType 0x30 //��Ϣ����
#define offset_ReciveMessageParam_MsgSourceType 0x34 //��Ϣ��Դ����
#define offset_ReciveMessageParam_MsgReciver 0x40 //��Ϣ�Ľ�����
#define offset_ReciveMessageParam_MsgContent 0x68 //��Ϣ����
#define offset_ReciveMessageParam_MsgSender 0x114 //��Ϣ�ķ�����

#define offset_QrCode 0x0			//��ά��
#define offset_QrCodeContect 0x0	//��ά������

#define offset_GoToQrCode1 0x0			//��ת����ά��
#define offset_GoToQrCode2 0x0			//��ת����ά��

#define offset_WxAntiRevoke 0x0			//������

#elif WECHAT_VERSION == 27276

#define offset_LoginSign 0x0	//��¼��־λ

#define offset_ReciveMessage 0x34DF18-5		//������Ϣ
#define offset_ReciveMessageParam 0x1624908		//������Ϣ�Ĳ���
#define offset_ReciveMessageParam_MsgType 0x30 //��Ϣ����
#define offset_ReciveMessageParam_MsgSourceType 0x34 //��Ϣ��Դ����
#define offset_ReciveMessageParam_MsgReciver 0x40 //��Ϣ�Ľ�����
#define offset_ReciveMessageParam_MsgContent 0x68 //��Ϣ����
#define offset_ReciveMessageParam_MsgSender 0x118 //��Ϣ�ķ�����

#define offset_QrCode 0x0			//��ά��
#define offset_QrCodeContect 0x0	//��ά������

#define offset_GoToQrCode1 0x0			//��ת����ά��
#define offset_GoToQrCode2 0x0			//��ת����ά��

#define offset_WxAntiRevoke 0x0			//������

#endif