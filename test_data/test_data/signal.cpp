//#include<iostream>
//using namespace std;
//
////���
//struct node
//{
//	int data;
//	node* next;
//};
//
////ͷ��� ȫ�ֱ���
//node* head = NULL;
//
////��ʼ�����
//void init_node()
//{
//	node* new_node = new node;
//	new_node->data = -1;        //�����ݳ�ʼ��һ�������ܲ��������
//	new_node->next = NULL;      //��ʼ��ָ��Ϊ��
//	head = new_node;            //��ͷָ��ָ����һ���´����Ľ��
//}
//
////ͷ�巨
//void head_insert(int key)
//{
//	node* new_node = new node;
//	new_node->data = key;
//	new_node->next = head->next;
//	head->next = new_node;
//}
//
////β�巨
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
////ɾ���ڵ�
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
//		cout << "û���ҵ�" << endl;
//		return;
//	}
//	prev->next = temp->next;
//	temp->next = NULL;
//	delete[]temp;
//	temp = NULL;
//}
//
////����
//void show()
//{
//	node* temp = head->next;
//	if (temp == NULL)
//	{
//		cout << "��" << endl;
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