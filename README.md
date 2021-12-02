## Doubly Linked List

```
    typedef struct dlist_s
    {
        int data;
        struct dlist_s *prev;
        struct dlist_s *next;
    } dlist_t;
```

- It is a data structure that can be traversed in both direction
- The head of the list can be the node with previous node is NULL
- The tail fo the list is the node with the next node is NULL
