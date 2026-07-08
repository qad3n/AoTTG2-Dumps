using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A1")]
internal interface IBoxableInstruction
{
	[Token(Token = "0x600094A")]
	Instruction BoxIfIndexMatches(int index);
}
