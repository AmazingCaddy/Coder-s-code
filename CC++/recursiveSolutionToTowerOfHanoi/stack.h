#define STACK_INIT_SIZE 100
#define STACKINCREMENT  10
#define  SElemType int
#define  Status  int

struct SqStack {
    SElemType *base;
    SElemType *top;
    int stacksize;
    char* name;
};

Status InitStack (struct SqStack *, char*);
//Status DestroyStack (struct SqStack *);
//Status ClearStack (struct SqStack *);
//Status StackEmpty (struct SqStack);
int StackLength (struct SqStack);
SElemType GetTop (struct SqStack); //��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR
Status Push (struct SqStack *, SElemType);
SElemType Pop (struct SqStack *);

Status InitStack(struct SqStack *S,char* name) {
    S->base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!S->base)
        return -1;
    S->top = S->base;
    S->stacksize = STACK_INIT_SIZE;
    S->name = name;
    return 0;
}

SElemType GetTop(struct SqStack S){
    SElemType e;
    if (S.top == S.base)
        return -1;
    e = *(S.top - 1);
    //printf("%d\n",e);
    return e;
}

Status Push(struct SqStack *S, SElemType e){
    //printf("%d\n",e);
    if (S->top - S->base >= S->stacksize){
        S->base = (SElemType *)realloc(S->base, (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
    if(!S->base)
        return -1;
    S->top = S->base + S->stacksize;
    S->stacksize += STACKINCREMENT;
    }
    *((S->top)++) = e;
    //printf("Push %d\n",*(S->top-1));
    return 0;
}

SElemType Pop (struct SqStack *S){
    //��ջ���գ���ɾ��S��ջ��Ԫ�أ���������ֵ��
    SElemType e;
    if (S->top == S->base)
        return -1;
    e = *(--(S->top));
    //printf("Pop %d\n",e);
    return e;
}

int StackLength (struct SqStack S){
    return S.top - S.base;
}
