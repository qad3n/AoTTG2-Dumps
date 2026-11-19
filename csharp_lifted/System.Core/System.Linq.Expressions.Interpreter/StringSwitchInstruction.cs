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

[Token(Token = "0x2000101")]
internal sealed class StringSwitchInstruction : Instruction
{
	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, int> _cases;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x18")]
	private readonly StrongBox<int> _nullCase;

	[Token(Token = "0x17000190")]
	public override string InstructionName
	{
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x5DDF780", Offset = "0x5DDE780", VA = "0x5DDF780", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000191")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600067F")]
		[Address(RVA = "0x5DDF7B0", Offset = "0x5DDE7B0", VA = "0x5DDF7B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x5DDF740", Offset = "0x5DDE740", VA = "0x5DDF740")]
	internal StringSwitchInstruction(Dictionary<string, int> cases, StrongBox<int> nullCase)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x5DDF7C0", Offset = "0x5DDE7C0", VA = "0x5DDF7C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
