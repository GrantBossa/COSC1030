# Instructions  

The following function uses reference variables as parameters. Rewrite the function so it uses pointers instead of reference variables, then demonstrate the function in a complete program.

```C
int doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}
```

Review [Solving the Pointer Rewrite Problem](https://mediaplayer.pearsoncmg.com/assets/gaddis_cpp10e_0902_Solving_Pointer_Rewrite_Problem) VideoNote. You will see the output you should have for this programming challenge as well as the code. 