struct ListNode *readlist()
{
    struct ListNode *head;
    struct ListNode *p;
    struct ListNode *q;
    int temp;
    p = (struct ListNode *)malloc(sizeof(struct ListNode));
    scanf("%d", &temp);
    if (temp != -1)
    {
        p->data = temp;
        p->next = NULL;
        head = p;
    }
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
    return head;
}
struct ListNode *getodd(struct ListNode **L)
{
    // 新的组成奇、L剩下偶
    // 偷鸡操作，只需要获取数字就行，不用在意原链表
    int odd_arr[100];
    int even_arr[100];
    int odd_count = 0, even_count = 0;
    struct ListNode *current, *new;
    current = *L;
    while (current)
    {
        if ((current->data) % 2 == 0)
        {
            even_arr[even_count] = current->data;
            even_count++;
        }
        else
        {
            odd_arr[odd_count] = current->data;
            odd_count++;
        }
        current=current->next;
    }
    struct ListNode *odd_head = NULL;  //鸡头
    struct ListNode *even_head = NULL; //偶头
    struct ListNode *odd, *even;
    // 生成偶链表
    if (even_count > 0)
    {
        new = (struct ListNode *)malloc(sizeof(struct ListNode));
        new->data = even_arr[0];
        new->next = NULL;
        even_head = new;
        even = even_head;
        for (int i = 1; i < even_count; i++)
        {
            new = (struct ListNode *)malloc(sizeof(struct ListNode));
            new->data = even_arr[i];
            new->next = NULL;
            even->next = new;
            even =even->next;
        }
    }
    if (odd_count > 0)
    {
        new = (struct ListNode *)malloc(sizeof(struct ListNode));
        new->data = odd_arr[0];
        new->next = NULL;
        odd_head = new;
        odd = odd_head;
        for (int i = 1; i < odd_count; i++)
        {
            new = (struct ListNode *)malloc(sizeof(struct ListNode));
            new->data = odd_arr[i];
            new->next = NULL;
            odd->next = new;
            odd =odd->next;
        }
    }

    *L = even_head;
    return odd_head;
}