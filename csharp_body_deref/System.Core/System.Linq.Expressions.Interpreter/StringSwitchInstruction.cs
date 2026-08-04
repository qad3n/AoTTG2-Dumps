// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StringSwitchInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x44C9C10", Offset = "0x44C9C10", VA = "0x44C9C10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x44C9C40", Offset = "0x44C9C40", VA = "0x44C9C40", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x44C9BD0", Offset = "0x44C9BD0", VA = "0x44C9BD0")]
	internal StringSwitchInstruction(Dictionary<string, int> cases, StrongBox<int> nullCase)
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x44C9C50", Offset = "0x44C9C50", VA = "0x44C9C50", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
