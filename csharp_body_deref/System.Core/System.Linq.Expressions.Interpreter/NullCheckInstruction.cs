// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NullCheckInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000203")]
internal sealed class NullCheckInstruction : Instruction
{
	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Instruction Instance;

	[Token(Token = "0x17000217")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x44FED10", Offset = "0x44FED10", VA = "0x44FED10", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000218")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x44FED20", Offset = "0x44FED20", VA = "0x44FED20", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000219")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x44FED30", Offset = "0x44FED30", VA = "0x44FED30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x44FED00", Offset = "0x44FED00", VA = "0x44FED00")]
	private NullCheckInstruction()
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x44FED60", Offset = "0x44FED60", VA = "0x44FED60", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
