// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadObjectInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021C")]
internal sealed class LoadObjectInstruction : Instruction
{
	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _value;

	[Token(Token = "0x17000226")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AAA")]
		[Address(RVA = "0x45022A0", Offset = "0x45022A0", VA = "0x45022A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000227")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AAB")]
		[Address(RVA = "0x45022B0", Offset = "0x45022B0", VA = "0x45022B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x4502270", Offset = "0x4502270", VA = "0x4502270")]
	internal LoadObjectInstruction(object value)
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x45022E0", Offset = "0x45022E0", VA = "0x45022E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x4502360", Offset = "0x4502360", VA = "0x4502360", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
