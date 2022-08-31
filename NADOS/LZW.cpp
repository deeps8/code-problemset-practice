#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "windows.h"

using namespace std;

struct Node{
	int index;
	string data;
	Node *next;
};

void st_Node(Node *head, int index, string data){
	head->index = index;
	head->data = data;
	head->next = NULL;
}

void insert_Node(Node *head, int index, string data){
	Node *new_Node = new Node;
	new_Node->index = index;
	new_Node->data = data;
	new_Node->next = NULL;

	Node *curr = head;
	while (curr != NULL)
	{
		if (curr->next == NULL)
		{
			curr->next = new_Node;
			return;
		}
		curr = curr->next;
	}
}

Node *search_Node(Node *head, string data)
{
	Node *curr = head;
	while (curr != NULL)
	{
		if (data.compare(curr->data) == 0)
			return curr;
		else
			curr = curr->next;
	}
	return NULL;
}

Node *search_Node(Node *head, int index)
{
	Node *curr = head;
	while (curr != NULL)
	{
		if (index == curr->index)
			return curr;
		else
			curr = curr->next;
	}
	return NULL;
}

bool delete_Node(Node *head, Node *to_delete){
	if (to_delete == NULL)
		return false;
	else if (to_delete == head)
	{
		head = to_delete->next;
		delete to_delete;
		return true;
	}
	else{
		Node *curr = head;
		while (curr)
		{
			if (curr->next == to_delete)
			{
				curr->next = to_delete->next;
				delete to_delete;
				return true;
			}
			curr = curr->next;
		}
		return false;
	}
}

vector <string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str); // Turn the string into a stream.
	string tok;

	while (getline(ss, tok, delimiter)) {
		internal.push_back(tok);
	}

	return internal;
}

string LZW(string input)
{
		Node *dictionary = new Node;
		string result;
		int length, last_seen, index = 128;

		st_Node(dictionary, 32, " ");
		for (int i = 33; i < 128; i++)
		{
			string data;
			data = i;
			insert_Node(dictionary, i, data);
		}

		length = (int)input.length();

		for (int i = 0; i < length; i++)
		{
			Node *searched;
			string search;
			search = input[i];

		re_search:
			searched = search_Node(dictionary, search);
			if (searched)
			{
				i++;
				search += input[i];
				last_seen = searched->index;
				if (i != length)
					goto re_search;
				else
					goto print;
			}
			else
			{
				insert_Node(dictionary, index, search);
				index++;
			print:
				result += to_string(last_seen-'a'+1) + " ";
				i--;
			}
		}

		return result;
	
}

int main()
{
	string input, result, method_text;
	int method, option, option2;

	cout<<"Dictionary Based Encoding Scheme\n";
	cout<<"Enter the string you want to encode : ";
	cin>>input;
	transform(input.begin(), input.end(), input.begin(), ::tolower);

	result = LZW(input);
	
	cout << "Encoded String  : " << result << endl;

	return 0;
}

