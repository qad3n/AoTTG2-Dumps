// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TypeIsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000231")]
internal sealed class TypeIsInstruction : Instruction
{
	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000237")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000238")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000239")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x24818A0", Offset = "0x247FEA0", VA = "0x1824818A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	internal TypeIsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x24817E0", Offset = "0x247FDE0", VA = "0x1824817E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x2481840", Offset = "0x247FE40", VA = "0x182481840", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
