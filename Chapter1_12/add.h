#pragma once //헤더 가드를 넣어서 이미 include 시 정의된 함수는 다시 불러오지 않음

//#ifndef MY_ADD  #pragma once 와 같은 역할
//#define MY_ADD

int add(int a, int b) 
{
	return a + b;
}

//#endif