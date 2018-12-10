#include<stdio.h>
#include<stdlib.h>

void trashagain();

typedef struct tree
{
	struct tree* leftchild;
	struct tree* rightsibling;

	int data;
	int num;
	int parent;
}tree;

void append(tree *parent, tree *child,int newdata)
{
	if (parent->leftchild == NULL)
	{
		parent->leftchild = child;
	}
	else
	{
		tree* curr = parent->leftchild;
		while (curr->rightsibling != NULL)
		{
			curr = curr->rightsibling;
		}
		curr->rightsibling = child;
	}
	child->data = newdata;
	return;
}
void trash(tree* parent)
{
	parent->data = -2;
	if (parent->leftchild != NULL)
	{
		trashagain(parent->leftchild);		
	}

}
void trashagain(tree* parent)
{
	parent->data = -2;
	if (parent->leftchild != NULL)
	{
		trashagain(parent->leftchild);
	}
	if (parent->rightsibling != NULL)
	{
		tree* curr = parent;
		curr = curr->rightsibling;
		trashagain(curr);
	}

}
int main()
{
	int *num;
	int a;
	int changer;
	int destroy;
	int count=0;
	tree *node[51];

	scanf("%d", &a);
	num = (int*)malloc(sizeof(int)*a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < a; i++)
	{
		node[i] = malloc(sizeof(tree));
		node[i]->data = -2;
		node[i]->parent = num[i];
		node[i]->num = i;
		if (num[i] == -1)
		{
			node[i]->data = 0;
		}
		node[i]->leftchild = NULL;
		node[i]->rightsibling = NULL;
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (node[j]->num == num[i])
			{
				append(node[j], node[i], i);
				break;
			}
		}
	}
	scanf("%d", &destroy);
	if (node[destroy]->leftchild != NULL)
	{
		trash(node[destroy]);
	}
	else
	{
		node[destroy]->data = -2;
	}
	for (int i = 0; i < a; i++)
	{
		if(node[i]->leftchild == NULL && node[i]->data >= 0)
		{
			count++;
		}
		if (node[i]->leftchild != NULL)
		{
			if (node[i]->data >= 0 && node[i]->leftchild->data == -2 && node[i]->leftchild->rightsibling ==NULL)
			{
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}