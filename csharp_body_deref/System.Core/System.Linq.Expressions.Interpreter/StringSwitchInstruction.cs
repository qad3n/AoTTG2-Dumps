using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000100")]
internal sealed class StringSwitchInstruction : Instruction
{
	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, int> _cases;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x18")]
	private readonly StrongBox<int> _nullCase;

	[Token(Token = "0x1700018E")]
	public override string InstructionName
	{
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x41A4B10", Offset = "0x41A4B10", VA = "0x41A4B10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x41A4B40", Offset = "0x41A4B40", VA = "0x41A4B40", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x41A4AD0", Offset = "0x41A4AD0", VA = "0x41A4AD0")]
	internal StringSwitchInstruction(Dictionary<string, int> cases, StrongBox<int> nullCase)
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x41A4B50", Offset = "0x41A4B50", VA = "0x41A4B50", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
