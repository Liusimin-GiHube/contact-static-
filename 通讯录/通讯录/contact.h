#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


//#define MAX 100	//����ͨѶ¼��ʼ�ڴ�(��̬�汾)
#define ADD_SIZE 2	//ÿ�����ݸ���
#define INIT_SIZE 3	//��ʼ������

//��ϵ����Ϣ
typedef	struct peo
{
	char name[20];
	int age;
	int gender; //��--1�� Ů--0
	char tel[12];
	char address[30];
}peo;

//��̬�汾
////����ͨѶ¼�ṹ
//typedef struct contact
//{
//	peo data[MAX];//��ϵ����Ϣ
//	int count;//��ϵ�˸���
//}contact;

//����ͨѶ¼�ṹ����̬�汾��
typedef struct contact
{
	peo* data;//��ϵ����Ϣ
	int count;//��ǰ��ϵ�˸���
	int capacity;	//ͨѶ¼����
}contact;

//��ʼ��ͨѶ¼
void Init(contact* pc);

//�����ϵ��
void Add(contact* pc);

//չʾͨѶ¼
void Show(const contact* pc);

//ɾ����ϵ��
void Del(contact* pc);

//������ϵ��
void Search(const contact* pc);

//�޸���ϵ��
void Modify(contact* pc);

//����
void Sort(contact* pc);