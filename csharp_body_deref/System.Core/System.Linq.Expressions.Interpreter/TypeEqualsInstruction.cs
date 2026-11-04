// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TypeEqualsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000233")]
internal sealed class TypeEqualsInstruction : Instruction
{
	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypeEqualsInstruction Instance;

	[Token(Token = "0x1700023D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x24817B0", Offset = "0x247FDB0", VA = "0x1824817B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private TypeEqualsInstruction()
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x24816E0", Offset = "0x247FCE0", VA = "0x1824816E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
