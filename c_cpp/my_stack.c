/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#include <stdio.h>

#include "include/my_stack.h"
#define LEN 10
int top=0;
int sta[LEN];
int stack_capacity(){
}

int stack_size(){
	return LEN;
}
int stack_is_full(){
	return top==LEN;
}

int stack_is_empty(){
	return top==0;
}

int stack_pop(){
	--top;
	return sta[top]; 
}

void stack_push(int x){
	sta[top++]=x;
	return;
}
