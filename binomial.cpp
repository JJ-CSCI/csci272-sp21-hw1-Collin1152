#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial
{
  public:
    Binomial(float coef1 = 1.0, float coef2 = 1.0, int pow1 = 1, int pow2 = 1);
    float GetCoefficient(int index);
    int GetPower(int index);
    void GetPower(int index);
    Binomial GetPower(int index);
    Binomial Multiply(float number, Binomial one);
    Binomial Multiply(float number, int monomial);
};