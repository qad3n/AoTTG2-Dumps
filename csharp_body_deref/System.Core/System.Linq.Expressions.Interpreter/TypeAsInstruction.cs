// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TypeAsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000232")]
internal sealed class TypeAsInstruction : Instruction
{
	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x1700023A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x4504CE0", Offset = "0x4504CE0", VA = "0x4504CE0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x4504CF0", Offset = "0x4504CF0", VA = "0x4504CF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x4504D00", Offset = "0x4504D00", VA = "0x4504D00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4504CB0", Offset = "0x4504CB0", VA = "0x4504CB0")]
	internal TypeAsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x4504D30", Offset = "0x4504D30", VA = "0x4504D30", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x4504D90", Offset = "0x4504D90", VA = "0x4504D90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
