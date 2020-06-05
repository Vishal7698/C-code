template<class T>
T Multiply(T no1, T no2)
{
 T ans;
ans = no1+no2;
return ans;
}
int main()
{
T iRet = Multiply(10,20);
printf(“%d”,iRet);
iRet = Multiply(10.0f,20.0f);
printf(“%f”,iRet);
return 0;
}