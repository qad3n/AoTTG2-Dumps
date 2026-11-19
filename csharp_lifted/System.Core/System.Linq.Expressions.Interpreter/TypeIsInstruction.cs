// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TypeIsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000232")]
internal sealed class TypeIsInstruction : Instruction
{
	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000239")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x5E19E40", Offset = "0x5E18E40", VA = "0x5E19E40", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023A")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x5E19E50", Offset = "0x5E18E50", VA = "0x5E19E50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x5E19E60", Offset = "0x5E18E60", VA = "0x5E19E60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x5E19E10", Offset = "0x5E18E10", VA = "0x5E19E10")]
	internal TypeIsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x5E19E90", Offset = "0x5E18E90", VA = "0x5E19E90", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x5E19EF0", Offset = "0x5E18EF0", VA = "0x5E19EF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
