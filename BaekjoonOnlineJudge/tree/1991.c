#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
	struct tree* left;
	struct tree* right;

	char data;
}tree;
void appendleft(tree* parent, tree* left)
{
	parent->left = left;
	return;
}
void appendright(tree* parent, tree* right)
{
	parent->right = right;
	return;
}
void preorder(tree* head)
{
	printf("%c", head->data);
	if (head->left != NULL)
	{
		preorder(head->left);
	}
	if (head->right != NULL)
	{
		preorder(head->right);
	}
}
void inorder(tree* head)
{
	if (head->left != NULL)
	{
		inorder(head->left);
	}
	printf("%c", head->data);
	if (head->right != NULL)
	{
		inorder(head->right);
	}
	
}
void postorder(tree* head)
{
	if (head->left != NULL)
	{
		postorder(head->left);
	}
	if (head->right != NULL)
	{
		postorder(head->right);
	}
	printf("%c", head->data);	
}

int main()
{
	int i,j;
	int num;
	char pa;
	char le;
	char ri;
	int *papos;
	int *chpos;
	

	tree* node[26];

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		node[i] = malloc(sizeof(tree));
		node[i]->data = 65+i;
		node[i]->left = NULL;
		node[i]->right = NULL;
	}
	for (i = 0; i < num; i++)
	{
		getchar();
		scanf("%c %c %c", &pa, &le, &ri);
		if (le != '.')
		{
			for (j = 0; j < num; j++)
			{
				if (node[j]->data == le)
				{
					chpos = node[j];
					break;
				}				
			}
			for (j = 0; j < num; j++)
			{
				if (node[j]->data == pa)
				{
					papos = node[j];
					break;
				}
			}
			appendleft(papos, chpos);
		}
		if (ri != '.')
		{
			for (j = 0; j < num; j++)
			{
				if (node[j]->data == ri)
				{
					chpos = node[j];
					break;
				}
			}
			for (j = 0; j < num; j++)
			{
				if (node[j]->data == pa)
				{
					papos = node[j];
					break;
				}
			}
			appendright(papos, chpos);
		}
	}
	preorder(node[0]);
	printf("\n");
	inorder(node[0]);
	printf("\n");
	postorder(node[0]);
	return 0;
}