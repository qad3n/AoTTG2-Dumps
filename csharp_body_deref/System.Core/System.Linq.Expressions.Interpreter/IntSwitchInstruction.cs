using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FF")]
internal sealed class IntSwitchInstruction<T> : Instruction
{
	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<T, int> _cases;

	[Token(Token = "0x1700018C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000671")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600066F")]
	internal IntSwitchInstruction(Dictionary<T, int> cases)
	{
	}

	[Token(Token = "0x6000672")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
