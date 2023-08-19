//#include<iostream>
//using namespace std;
//
////结点
//struct node
//{
//	int data;
//	node* next;
//};
//
////头结点 全局变量
//node* head = NULL;
//
////初始化结点
//void init_node()
//{
//	node* new_node = new node;
//	new_node->data = -1;        //将数据初始化一个不可能插入的数据
//	new_node->next = NULL;      //初始化指针为空
//	head = new_node;            //将头指针指向这一个新创建的结点
//}
//
////头插法
//void head_insert(int key)
//{
//	node* new_node = new node;
//	new_node->data = key;
//	new_node->next = head->next;
//	head->next = new_node;
//}
//
////尾插法
//void end_insert(int key)
//{
//	node* new_node = new node;
//	node* temp = head;
//	while (temp->next != NULL)
//		temp = temp->next;
//	new_node->data = key;
//	new_node->next = temp->next;
//	temp->next = new_node;
//}
//
////删除节点
//void delete_node(int key)
//{
//	node* temp = head->next;
//	node* prev = head;
//	while (temp->data != key && temp->next != NULL)
//	{
//		prev = temp;
//		temp = temp->next;
//	}
//	if (temp->next == NULL)
//	{
//		cout << "没有找到" << endl;
//		return;
//	}
//	prev->next = temp->next;
//	temp->next = NULL;
//	delete[]temp;
//	temp = NULL;
//}
//
////遍历
//void show()
//{
//	node* temp = head->next;
//	if (temp == NULL)
//	{
//		cout << "空" << endl;
//		return;
//	}
//	while (temp != NULL)
//	{
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	init_node();
//	head_insert(4);
//	head_insert(9);
//	end_insert(7);
//	show();
//	delete_node(4);
//	show();
//}