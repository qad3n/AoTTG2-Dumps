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
		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x24816B0", Offset = "0x247FCB0", VA = "0x1824816B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	internal TypeAsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x24815D0", Offset = "0x247FBD0", VA = "0x1824815D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x2481650", Offset = "0x247FC50", VA = "0x182481650", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
