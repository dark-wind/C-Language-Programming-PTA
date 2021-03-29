struct ListNode *readlist()
{
    struct ListNode *head = NULL;
    struct ListNode *q, *p;
    int temp;
    scanf("%d", &temp);
    if (temp != -1)
    {
        head = (struct ListNode *)malloc(sizeof(struct ListNode));
        head->data = temp;
        p = head;
        while (temp != -1)
        {
            q = (struct ListNode *)malloc(sizeof(struct ListNode));
            scanf("%d", &temp);
            if (temp == -1)
            {
                break;
            }
            q->data = temp;
            q->next = NULL;
            p->next = q;
            p = p->next;
        }
    }
    return head;
}
struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *current;
    struct ListNode *head, *p, *q;
    int temp = -1;
    current = L;
    while (current)
    {
        if (current->data == m)
        {
            current = current->next;
        }
        else
        {
            temp = current->data;
            break;
        }
    }
    if (temp != -1)
    {
        head = (struct ListNode *)malloc(sizeof(struct ListNode));
        head->data = temp;
        q = head;
        current = current->next;
        while (current)
        {
            if (current->data != m)
            {
                p = (struct ListNode *)malloc(sizeof(struct ListNode));
                p->data = current->data;
                p->next = NULL;
                q->next = p;
                q = p;
            }
            current = current->next;
        }
        return  head;
    }
    else
    {
        return current;
    }
}