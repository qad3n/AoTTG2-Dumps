// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadObjectInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021D")]
internal sealed class LoadObjectInstruction : Instruction
{
	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _value;

	[Token(Token = "0x17000228")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x5E175B0", Offset = "0x5E165B0", VA = "0x5E175B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000229")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x5E175C0", Offset = "0x5E165C0", VA = "0x5E175C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x5E17580", Offset = "0x5E16580", VA = "0x5E17580")]
	internal LoadObjectInstruction(object value)
	{
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x5E175F0", Offset = "0x5E165F0", VA = "0x5E175F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x5E17670", Offset = "0x5E16670", VA = "0x5E17670", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
