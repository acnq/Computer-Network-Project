#pragma once
#define _DEFAULT_PORT 3574 //��Ҫ��ʹ��ѧ��
enum PacketRequest {//request packet type
	NAME = '1',
	LIST = '2',
	TIME = '3',
	DATA = '4',
	DISCONN = '5'
};