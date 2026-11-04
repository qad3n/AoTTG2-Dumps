// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.BranchInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F1")]
internal class BranchInstruction : OffsetInstruction
{
	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[][][] s_caches;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x18")]
	internal readonly bool _hasResult;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x19")]
	internal readonly bool _hasValue;

	[Token(Token = "0x17000168")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x24297F0", Offset = "0x2427DF0", VA = "0x1824297F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000169")]
	public override string InstructionName
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x2429AB0", Offset = "0x24280B0", VA = "0x182429AB0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x2429AA0", Offset = "0x24280A0", VA = "0x182429AA0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016B")]
	public override int ProducedStack
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x2429AE0", Offset = "0x24280E0", VA = "0x182429AE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x2429780", Offset = "0x2427D80", VA = "0x182429780")]
	internal BranchInstruction()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x24297B0", Offset = "0x2427DB0", VA = "0x1824297B0")]
	public BranchInstruction(bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
