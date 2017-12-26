#define NULLKEY -3245
#define Big 10086

typedef struct
{
int *row;//
int count;
}HashTable;

/*初始化哈希表*/

Status InitHashTable(HashTable *table,int size)
{
int i;
table->count = size;
table->row=(int *)malloc(size*sizeof(int));
for(i=0;i<size;i++)
{
table[i]=NULLKEY;
}
return 1;
}


/*计算散列地址*/

int Hash(int key,int size)
{
return key%size;
}


/*插入关键字，完成散列表*/

void FinshHash(HashTable *h,int key)
{

int addr = Hash(key);
while(h->row[addr]!=NULLKEY)
{
addr=(addr+)%size;
}

h->row[addr]=key;

}

/*哈希表查找*/

status FindHash(HashTable *h,int key,int *addr)
{
addr=Hash(key,size);
while(h->row[*addr]!=key)
{
*addr=(*addr+1)%size;

}
}
