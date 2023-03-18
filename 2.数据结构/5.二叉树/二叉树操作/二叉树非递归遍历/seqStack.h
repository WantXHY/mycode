#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 1024

struct SStack
{
	void* data[Max];
	int m_size;
};

typedef void* seqStack;

//��ʼ��
seqStack init_Stack();
//��ջ
void push_Stack(seqStack stack, void* data);
//��ջ
void pop_Stack(seqStack stack);
//����ջ��Ԫ��
void* top_Stack(seqStack stack);
//����ջ��С
int size_Stack(seqStack stack);
//�ж�ջ�Ƿ�Ϊ��
int isEmpty_Stack(seqStack stack);
//����ջ
void destory_Stack(seqStack stack);