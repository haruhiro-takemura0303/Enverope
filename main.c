# include <stdio.h>
# include <stdint.h>

int32_t expArg;
int32_t expValue;

int32_t calcExponential(int32_t x) //Q.8
{
    int32_t expAns;
    int32_t doublePoly;

    if (x < 0){
        x = -1*x;
        doublePoly = x*x>>9;
        expAns = 1*(1<<8) - x + doublePoly;
    }
    else{
        doublePoly = x*x>>9;
        expAns = 1*(1<<8) + x + doublePoly; 
    }

    return expAns; //Q.8
}

int main(void)
{
expArg = 0.9*(1<<8);
expValue = calcExponential(expArg);
int16_t ans = expValue>>8;
printf("%d\n",ans);

}