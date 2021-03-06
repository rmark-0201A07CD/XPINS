//
//  XPINSInstruction.h
//  XPINS
//
//  Created by Robbie Markwick on 7/13/14.
//
//

#ifndef __XPINS__XPINSInstructions__
#define __XPINS__XPINSInstructions__

#include <iostream>
#include <vector>

using namespace std;
namespace XPINSInstructions {
	enum DataType {
		VOID,
		BOOLEAN,
		NUMBER,
		VECTOR,
		QUATERNION,
		MATRIX,
		POLYNOMIAL,
		FIELD,
		STRING,
		OBJECT,
		ARRAY
	};
	enum ArgType {
		VAR,
		CONST,
		FUNC,
		BIF,
		EXP
	};
	enum LineType {
		NULLTYPE,
		ASSIGN,
		VOIDFUNC,
		IF,
		ELSE,
		WHILE,
		LOOP,
		RETURN,
		BREAK
	};
	enum opCode
	{
		NOT=0,OR,AND,//LOGICAL
		LESS,LESSEQ,GREATER,GREATEREQ,NOTEQUAL,EQAUAL,//RELATIONAL
		ADD,SUBTRACT,MULTIPLY,DIVIDE,POWER,REMAINDER,//ARITHMATIC
		PREINCREMENT,PREDECREMENT,POSTDECREMENT,POSTINCREMENT,//INCREMENT and DECREMENT
		COMPOSITION,
		INVALID//INVALID op code
	};
	struct Argument{
		DataType dataType;
		ArgType type;
		int modNumber;
		int number;
		bool isElemental;
		vector<Argument> arguments;
		vector<Argument> subscripts;
		void* literalValue;
	};
	struct Instruction {
		LineType type;
		Argument left;
		Argument right;
		vector<Instruction> block;
	};
	struct InstructionSet{
		vector<Instruction> instructions;
		vector<int> varSizes;
	};
}
#endif