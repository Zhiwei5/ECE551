/* -*- C++ -*- */

#include <iostream>
#include <sstream>
#include <string>

class Expression
{
 protected:
  std::stringstream ss;

 public:
  Expression() : ss() {}
  virtual std::string toString() const = 0;
  virtual ~Expression() {}
};

class NumExpression : public Expression
{
 protected:
  long number;

 public:
  NumExpression(long input_number) : number(input_number) { ss << number; }
  virtual std::string toString() const { return ss.str(); }

  virtual ~NumExpression() {}
};

class PlusExpression : public Expression
{
 public:
  PlusExpression(Expression * lhs, Expression * rhs) {
    ss << "(" << lhs->toString() << " + " << rhs->toString() << ")";
    delete lhs;
    delete rhs;
  }

  virtual std::string toString() const { return ss.str(); }
  virtual ~PlusExpression() {}
};
