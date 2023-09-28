#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_

#define SET_BIT(Var,BitNo)    Var |=  (1 << (BitNo))
#define CLR_BIT(Var,BitNo)    Var &= ~(1 << (BitNo))
#define TOG_BIT(Var,BitNo)    Var ^=  (1 << (BitNo))
#define GET_BIT(Var,BitNo)    ((Var>>BitNo)&0x01)

#endif /* LIB_BIT_MATH_H_ */
