extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

void err(void) 
{ 

  {
  ERROR: __VERIFIER_error();
}
}
extern int __VERIFIER_nondet_int() ;
int *return_self(int *p ) 
{ int tmp ;

  {
  {
  tmp = __VERIFIER_nondet_int();
  }
  if (tmp) {
    return (p);
  } else {
    return (p);
  }
}
}
int main(void) 
{ int a ;
  int *q ;

  {
  {
  a = 1;
  q = return_self(& a);
  *q = 2;
  }
  if (a != 2) {
    {
    err();
    }
  } else {

  }
  return (0);
}
}
