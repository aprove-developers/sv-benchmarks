extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
float f(float x)
{
  return x - (x*x*x)/6.0f + (x*x*x*x*x)/120.0f + (x*x*x*x*x*x*x)/5040.0f;
}

float fp(float x)
{
  return 1 - (x*x)/2.0f + (x*x*x*x)/24.0f + (x*x*x*x*x*x)/720.0f;
}

int main()
{
  float IN;
  __VERIFIER_assume(IN > -1.2f && IN < 1.2f);

  float x = IN - f(IN)/fp(IN);







  if(!(x < 0.1))
    __VERIFIER_error();

  return 0;
}
