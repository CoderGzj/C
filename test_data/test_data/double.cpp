#include<iostream>
using namespace std;

//结点结构体
struct node
{
	int data;
	node* front;
	node* next;
};

node* head;
node* last;

//初始化
void init_node()
{
	head = new node;
	last = new node;
	head->front = last;
	head->next = last;
	last->front = head;
	last->next = head;
	head->data = last->data = -1;
}

//头插法
void head_insert(int key)
{
	node* new_node = new node;
	new_node->data = key;
	new_node->front = head;
	new_node->next = head->next;
	head->next->front = new_node;
	head->next = new_node;

}

//尾插法
void end_insert(int key)
{
	node* new_node = new node;
	new_node->data = key;
	new_node->front = last->front ;
	new_node->next = last;
	new_node->front->next = new_node;
	last->front  = new_node;
}

//删除
void delete_node(int key)
{
	node* temp = head->next;
	if (temp->data == -1)
	{
		cout << "空" << endl;
		return;
	}
	while (temp->data != -1)
	{
		if (temp->data == key)
		{
			temp->front->next = temp->next;
			temp->next->front = temp->front;
			temp->next = temp->front = NULL;
			delete[]temp;
			temp = NULL;
			return;
		}
		temp = temp->next;
	}
	cout << "没找到" << endl;
}

//遍历
void show()
{
	node* temp = head->next;
	if (temp->data == -1)
	{
		cout << "空" << endl;
		return;
	}
	while (temp->data != -1)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;

}

int main()
{
	init_node();
	head_insert(5);
	head_insert(2);
	end_insert(3);
	show();
	delete_node(2);
	show();
}