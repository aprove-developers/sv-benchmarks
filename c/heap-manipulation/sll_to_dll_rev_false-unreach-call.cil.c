extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef unsigned int size_t;
struct node {
   struct node *next ;
   struct node *prev ;
};
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
extern int __VERIFIER_nondet_int(void) ;
static void fail(void) 
{ 

  {
  ERROR: __VERIFIER_error();
}
}
static struct node *alloc_node(void) 
{ struct node *ptr ;
  void *tmp ;
  unsigned int __cil_tmp3 ;
  void *__cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  __cil_tmp3 = (unsigned int )8UL;
  tmp = malloc(__cil_tmp3);
  ptr = (struct node *)tmp;
  }
  if (! ptr) {
    {
    abort();
    }
  } else {

  }
  __cil_tmp4 = (void *)0;
  *((struct node **)ptr) = (struct node *)__cil_tmp4;
  __cil_tmp5 = (unsigned int )ptr;
  __cil_tmp6 = __cil_tmp5 + 4;
  __cil_tmp7 = (void *)0;
  *((struct node **)__cil_tmp6) = (struct node *)__cil_tmp7;
  return (ptr);
}
}
static void chain_node(struct node **ppnode ) 
{ struct node *node ;
  struct node *tmp ;

  {
  {
  tmp = alloc_node();
  node = tmp;
  *((struct node **)node) = *ppnode;
  *ppnode = node;
  }
  return;
}
}
static struct node *create_sll(struct node  const  **pp1 , struct node  const  **pp2 ) 
{ struct node *list ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  struct node **__cil_tmp7 ;
  void *__cil_tmp8 ;
  struct node **__cil_tmp9 ;
  struct node *__cil_tmp10 ;
  struct node **__cil_tmp11 ;
  struct node *__cil_tmp12 ;
  struct node **__cil_tmp13 ;

  {
  __cil_tmp7 = & list;
  __cil_tmp8 = (void *)0;
  *__cil_tmp7 = (struct node *)__cil_tmp8;
  {
  while (1) {
    while_0_continue: /* CIL Label */ ;
    {
    chain_node(& list);
    tmp = __VERIFIER_nondet_int();
    }
    if (tmp) {

    } else {
      goto while_0_break;
    }
  }
  while_0_break: /* CIL Label */ ;
  }
  __cil_tmp9 = & list;
  __cil_tmp10 = *__cil_tmp9;
  *pp2 = (struct node  const  *)__cil_tmp10;
  {
  while (1) {
    while_1_continue: /* CIL Label */ ;
    {
    tmp___0 = __VERIFIER_nondet_int();
    }
    if (tmp___0) {

    } else {
      goto while_1_break;
    }
    {
    chain_node(& list);
    }
  }
  while_1_break: /* CIL Label */ ;
  }
  __cil_tmp11 = & list;
  __cil_tmp12 = *__cil_tmp11;
  *pp1 = (struct node  const  *)__cil_tmp12;
  {
  while (1) {
    while_2_continue: /* CIL Label */ ;
    {
    chain_node(& list);
    tmp___1 = __VERIFIER_nondet_int();
    }
    if (tmp___1) {

    } else {
      goto while_2_break;
    }
  }
  while_2_break: /* CIL Label */ ;
  }
  {
  __cil_tmp13 = & list;
  return (*__cil_tmp13);
  }
}
}
void init_back_link(struct node *list ) 
{ struct node *next ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;

  {
  {
  while (1) {
    while_3_continue: /* CIL Label */ ;
    next = *((struct node **)list);
    if (! next) {
      return;
    } else {

    }
    __cil_tmp3 = (unsigned int )next;
    __cil_tmp4 = __cil_tmp3 + 4;
    *((struct node **)__cil_tmp4) = list;
    list = next;
  }
  while_3_break: /* CIL Label */ ;
  }
}
}
void reverse_dll(struct node *list ) 
{ struct node *next ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;

  {
  {
  while (1) {
    while_4_continue: /* CIL Label */ ;
    if (list) {

    } else {
      goto while_4_break;
    }
    next = *((struct node **)list);
    __cil_tmp3 = (unsigned int )list;
    __cil_tmp4 = __cil_tmp3 + 4;
    *((struct node **)list) = *((struct node **)__cil_tmp4);
    __cil_tmp5 = (unsigned int )list;
    __cil_tmp6 = __cil_tmp5 + 4;
    *((struct node **)__cil_tmp6) = next;
    list = next;
  }
  while_4_break: /* CIL Label */ ;
  }
  return;
}
}
void remove_fw_link(struct node *list ) 
{ struct node *next ;
  void *__cil_tmp3 ;

  {
  {
  while (1) {
    while_5_continue: /* CIL Label */ ;
    if (list) {

    } else {
      goto while_5_break;
    }
    next = *((struct node **)list);
    __cil_tmp3 = (void *)0;
    *((struct node **)list) = (struct node *)__cil_tmp3;
    list = next;
  }
  while_5_break: /* CIL Label */ ;
  }
  return;
}
}
void check_seq_next(struct node  const  *beg , struct node  const  *end ) 
{ struct node *__cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  struct node *__cil_tmp6 ;

  {
  {
  while (1) {
    while_6_continue: /* CIL Label */ ;
    if (! beg) {
      {
      fail();
      }
    } else {

    }
    goto while_6_break;
  }
  while_6_break: /* CIL Label */ ;
  }
  {
  while (1) {
    while_7_continue: /* CIL Label */ ;
    if (! end) {
      {
      fail();
      }
    } else {

    }
    goto while_7_break;
  }
  while_7_break: /* CIL Label */ ;
  }
  __cil_tmp3 = *((struct node * const  *)beg);
  beg = (struct node  const  *)__cil_tmp3;
  {
  while (1) {
    while_8_continue: /* CIL Label */ ;
    {
    __cil_tmp4 = (unsigned int )beg;
    __cil_tmp5 = (unsigned int )end;
    if (__cil_tmp5 != __cil_tmp4) {

    } else {
      goto while_8_break;
    }
    }
    {
    while (1) {
      while_9_continue: /* CIL Label */ ;
      if (! beg) {
        {
        fail();
        }
      } else {

      }
      goto while_9_break;
    }
    while_9_break: /* CIL Label */ ;
    }
    __cil_tmp6 = *((struct node * const  *)beg);
    beg = (struct node  const  *)__cil_tmp6;
  }
  while_8_break: /* CIL Label */ ;
  }
  return;
}
}
void check_seq_prev(struct node  const  *beg , struct node  const  *end ) 
{ unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  struct node *__cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  struct node *__cil_tmp10 ;

  {
  {
  while (1) {
    while_10_continue: /* CIL Label */ ;
    if (! beg) {
      {
      fail();
      }
    } else {

    }
    goto while_10_break;
  }
  while_10_break: /* CIL Label */ ;
  }
  {
  while (1) {
    while_11_continue: /* CIL Label */ ;
    if (! end) {
      {
      fail();
      }
    } else {

    }
    goto while_11_break;
  }
  while_11_break: /* CIL Label */ ;
  }
  __cil_tmp3 = (unsigned int )beg;
  __cil_tmp4 = __cil_tmp3 + 4;
  __cil_tmp5 = *((struct node * const  *)__cil_tmp4);
  beg = (struct node  const  *)__cil_tmp5;
  {
  while (1) {
    while_12_continue: /* CIL Label */ ;
    {
    __cil_tmp6 = (unsigned int )beg;
    __cil_tmp7 = (unsigned int )end;
    if (__cil_tmp7 != __cil_tmp6) {

    } else {
      goto while_12_break;
    }
    }
    {
    while (1) {
      while_13_continue: /* CIL Label */ ;
      if (! beg) {
        {
        fail();
        }
      } else {

      }
      goto while_13_break;
    }
    while_13_break: /* CIL Label */ ;
    }
    __cil_tmp8 = (unsigned int )beg;
    __cil_tmp9 = __cil_tmp8 + 4;
    __cil_tmp10 = *((struct node * const  *)__cil_tmp9);
    beg = (struct node  const  *)__cil_tmp10;
  }
  while_12_break: /* CIL Label */ ;
  }
  return;
}
}
int main(void) 
{ struct node  const  *p1 ;
  struct node  const  *p2 ;
  struct node *list ;
  struct node *tmp ;
  struct node *prev ;
  struct node  const  **__cil_tmp6 ;
  struct node  const  *__cil_tmp7 ;
  struct node  const  **__cil_tmp8 ;
  struct node  const  *__cil_tmp9 ;
  struct node  const  **__cil_tmp10 ;
  struct node  const  *__cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  struct node *__cil_tmp14 ;
  int __cil_tmp15 ;
  struct node  const  **__cil_tmp16 ;
  struct node  const  *__cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  struct node *__cil_tmp20 ;
  int __cil_tmp21 ;
  struct node  const  **__cil_tmp22 ;
  struct node  const  *__cil_tmp23 ;
  struct node  const  **__cil_tmp24 ;
  struct node  const  *__cil_tmp25 ;
  struct node  const  **__cil_tmp26 ;
  struct node  const  *__cil_tmp27 ;
  struct node  const  **__cil_tmp28 ;
  struct node  const  *__cil_tmp29 ;
  struct node  const  **__cil_tmp30 ;
  struct node  const  *__cil_tmp31 ;
  struct node  const  **__cil_tmp32 ;
  struct node  const  *__cil_tmp33 ;
  struct node  const  **__cil_tmp34 ;
  struct node  const  *__cil_tmp35 ;
  struct node  const  **__cil_tmp36 ;
  struct node  const  *__cil_tmp37 ;
  struct node  const  **__cil_tmp38 ;
  struct node  const  *__cil_tmp39 ;
  struct node  const  **__cil_tmp40 ;
  struct node  const  *__cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  void *__cil_tmp44 ;

  {
  {
  tmp = create_sll(& p1, & p2);
  list = tmp;
  }
  {
  while (1) {
    while_14_continue: /* CIL Label */ ;
    goto while_14_break;
  }
  while_14_break: /* CIL Label */ ;
  }
  {
  __cil_tmp6 = & p1;
  __cil_tmp7 = *__cil_tmp6;
  __cil_tmp8 = & p2;
  __cil_tmp9 = *__cil_tmp8;
  check_seq_next(__cil_tmp7, __cil_tmp9);
  }
  {
  while (1) {
    while_15_continue: /* CIL Label */ ;
    {
    __cil_tmp10 = & p1;
    __cil_tmp11 = *__cil_tmp10;
    __cil_tmp12 = (unsigned int )__cil_tmp11;
    __cil_tmp13 = __cil_tmp12 + 4;
    __cil_tmp14 = *((struct node * const  *)__cil_tmp13);
    __cil_tmp15 = ! __cil_tmp14;
    if (! __cil_tmp15) {
      {
      fail();
      }
    } else {

    }
    }
    goto while_15_break;
  }
  while_15_break: /* CIL Label */ ;
  }
  {
  while (1) {
    while_16_continue: /* CIL Label */ ;
    {
    __cil_tmp16 = & p2;
    __cil_tmp17 = *__cil_tmp16;
    __cil_tmp18 = (unsigned int )__cil_tmp17;
    __cil_tmp19 = __cil_tmp18 + 4;
    __cil_tmp20 = *((struct node * const  *)__cil_tmp19);
    __cil_tmp21 = ! __cil_tmp20;
    if (! __cil_tmp21) {
      {
      fail();
      }
    } else {

    }
    }
    goto while_16_break;
  }
  while_16_break: /* CIL Label */ ;
  }
  {
  init_back_link(list);
  }
  {
  while (1) {
    while_17_continue: /* CIL Label */ ;
    goto while_17_break;
  }
  while_17_break: /* CIL Label */ ;
  }
  {
  __cil_tmp22 = & p1;
  __cil_tmp23 = *__cil_tmp22;
  __cil_tmp24 = & p2;
  __cil_tmp25 = *__cil_tmp24;
  check_seq_next(__cil_tmp23, __cil_tmp25);
  __cil_tmp26 = & p2;
  __cil_tmp27 = *__cil_tmp26;
  __cil_tmp28 = & p1;
  __cil_tmp29 = *__cil_tmp28;
  check_seq_prev(__cil_tmp27, __cil_tmp29);
  reverse_dll(list);
  }
  {
  while (1) {
    while_18_continue: /* CIL Label */ ;
    goto while_18_break;
  }
  while_18_break: /* CIL Label */ ;
  }
  {
  __cil_tmp30 = & p1;
  __cil_tmp31 = *__cil_tmp30;
  __cil_tmp32 = & p2;
  __cil_tmp33 = *__cil_tmp32;
  check_seq_prev(__cil_tmp31, __cil_tmp33);
  __cil_tmp34 = & p2;
  __cil_tmp35 = *__cil_tmp34;
  __cil_tmp36 = & p1;
  __cil_tmp37 = *__cil_tmp36;
  check_seq_next(__cil_tmp35, __cil_tmp37);
  remove_fw_link(list);
  }
  {
  while (1) {
    while_19_continue: /* CIL Label */ ;
    goto while_19_break;
  }
  while_19_break: /* CIL Label */ ;
  }
  {
  __cil_tmp38 = & p1;
  __cil_tmp39 = *__cil_tmp38;
  __cil_tmp40 = & p2;
  __cil_tmp41 = *__cil_tmp40;
  check_seq_prev(__cil_tmp39, __cil_tmp41);
  }
  {
  while (1) {
    while_20_continue: /* CIL Label */ ;
    if (list) {

    } else {
      goto while_20_break;
    }
    {
    __cil_tmp42 = (unsigned int )list;
    __cil_tmp43 = __cil_tmp42 + 4;
    prev = *((struct node **)__cil_tmp43);
    __cil_tmp44 = (void *)list;
    free(__cil_tmp44);
    list = prev;
    }
  }
  while_20_break: /* CIL Label */ ;
  }
  return (0);
}
}
