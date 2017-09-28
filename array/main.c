#include <stdio.h>

void init_arr(struct Array *pArr,int len);// 初始化数组
bool append_arr(struct Array *pArr,int val);// 在数组后追加一个元素
bool insert_arr(struct Array *pArr,int pos,int val);// 指定位置插入元素
bool delete_arr(struct Array *pArr,int pos,int *val);// 指定位置删除元素
bool isFull_arr(struct Array *pArr);// 判断数组是否满
bool isEmpty_arr(struct Array *pArr);// 判断数组是否空
void show_arr(struct Array *pArr);// 打印数组中的元素
void inversion_arr(struct Array *pArr);// 倒置数组中的元素
void selectSort_arr(struct Array *pArr);// 选择排序
void bubbleSort_arr(struct Array *pArr);// 冒泡排序

typedef struct Array{
	int data; // 存放的数据
	int maxSize; // 最大长度
	int length; // 当前长度
};

void main() {
	printf("Hello, World!\n");
	init_arr();
	getchar();
}

void init_arr(struct Array *pArr,int len){

}