#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
  int data;
  struct _node *next;
} Node;

int main(void)
{
  Node *cur = NULL;
  Node *tail = NULL;
  Node *head = NULL;

  Node *dummy = (Node *)malloc(sizeof(Node));
  head = dummy;

  Node *newNode = NULL;
  int readData;

  while (1)
  {
    printf("자연수 입력: ");
    scanf("%d", &readData);
    if (readData < 1)
      break;

    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = readData;
    newNode->next = NULL;

    if (tail == NULL)
      dummy->next = newNode;
    else
      tail->next = newNode;

    tail = newNode;
  }
  printf("\n");

  printf("입력 받은 데이터의 전체 출력!\n");
  if (dummy->next == NULL)
    printf("저장된 자연수가 존재하지 않습니다.\n");
  else
  {
    cur = dummy->next;
    printf("%d ", cur->data);
    while (cur->next != NULL)
    {
      cur = cur->next;
      printf("%d ", cur->data);
    }
    printf("\n");
  }

  if (dummy->next == NULL)
    return 0;
  else
  {
    Node *delNode = dummy->next;
    Node *delNextNode = delNode->next;

    printf("%d을(를) 삭제합니다. \n", delNode->data);
    free(delNode);
    while (delNextNode != NULL)
    {
      delNode = delNextNode;
      delNextNode = delNextNode->next;

      printf("%d을(를) 삭제합니다. \n", delNode->data);
      free(delNode);
    }
  }
  return 0;
}