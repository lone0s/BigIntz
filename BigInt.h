//
// Created by ohno on 5/4/2023.
//

#pragma once

#include <string>

class BigInt {
    private:
        std::string value;
        bool isNegative;
    public:
        explicit BigInt(const std::string& val) : value(val){
            isNegative = (val[0] == '-');
        };
        BigInt(const BigInt& bigInt) : value(bigInt.value), isNegative(bigInt.isNegative) {};
        BigInt(const long long& val) : value(std::to_string(val)) {
            isNegative = (val < 0);
        };

        BigInt operator + (const BigInt& bigInt) const;
        BigInt operator * (const BigInt& bigInt) const;
        /* TO DO LATER ://
        BigInt operator - (const BigInt& bigInt) const;
        BigInt operator / (const BigInt& bigInt) const;
        BigInt operator % (const BigInt& bigInt) const;
        BigInt operator ^ (const BigInt& bigInt) const;
        BigInt operator & (const BigInt& bigInt) const;
        BigInt operator | (const BigInt& bigInt) const;
        BigInt operator ~ () const;
        BigInt operator << (const BigInt& bigInt) const;
        BigInt operator >> (const BigInt& bigInt) const;
        BigInt operator ++ ();
        BigInt operator -- ();
        BigInt operator ++ (int);
        BigInt operator -- (int);
        BigInt operator += (const BigInt& bigInt);
        BigInt operator -= (const BigInt& bigInt);
        BigInt operator *= (const BigInt& bigInt);
        BigInt operator /= (const BigInt& bigInt);
        BigInt operator %= (const BigInt& bigInt);
        BigInt operator ^= (const BigInt& bigInt);
        BigInt operator &= (const BigInt& bigInt);
        BigInt operator |= (const BigInt& bigInt);
        BigInt operator <<= (const BigInt& bigInt);
        BigInt operator >>= (const BigInt& bigInt);
        BigInt operator = (const BigInt& bigInt);
        BigInt operator = (const long long& val);
        BigInt operator = (const std::string& val);
        bool operator == (const BigInt& bigInt) const;
        bool operator != (const BigInt& bigInt) const;
        bool operator < (const BigInt& bigInt) const;
        bool operator > (const BigInt& bigInt) const;
        bool operator <= (const BigInt& bigInt) const;
        bool operator >= (const BigInt& bigInt) const;
        bool operator ! () const;
        bool operator && (const BigInt& bigInt) const;
        bool operator || (const BigInt& bigInt) const;
        */
};


//EVA01_BIGINT_H
