# include <stdio.h>
# include <stdint.h>

int32_t gPot1;
int32_t invTa;

int32_t expArg;
int32_t expValue;

int32_t calcExponential(int32_t x) //Q.15
{
    int32_t expAns;
    int32_t Poly;

    if (x < 0){
        x = x*(-1);
        printf("%d\n",x);
        Poly = ((x*x)>>1) - (x<<15);
        expAns = 1*(1<<15) + (Poly>>15);
        printf("poly : %x\n",Poly);
    }
    else{
        Poly = (x<<15) + ((x*x)>>1);
        expAns = 1*(1<<15) +(Poly>>15);
        printf("poly : %x\n",Poly);
        printf("expAns : %x\n",expAns);
    }

    return expAns; //Q.15
}

int main(void)
{
//define param
gPot1 = 1000;
invTa = (-1)*(2*(1<<15) / gPot1);

int16_t checkTa = invTa; 
printf("invTa %x\n",checkTa);

//calc exponent
expValue = calcExponential(invTa);
int16_t ans = expValue>>15;
printf("Ans %d\n",ans);

}