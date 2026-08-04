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
	[FieldOffset(Offset = "0x14")]
	internal readonly bool _hasResult;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x15")]
	internal readonly bool _hasValue;

	[Token(Token = "0x17000168")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x44C7A00", Offset = "0x44C7A00", VA = "0x44C7A00", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000169")]
	public override string InstructionName
	{
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x44C7CD0", Offset = "0x44C7CD0", VA = "0x44C7CD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x44C7D00", Offset = "0x44C7D00", VA = "0x44C7D00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016B")]
	public override int ProducedStack
	{
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x44C7D10", Offset = "0x44C7D10", VA = "0x44C7D10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x44C7C80", Offset = "0x44C7C80", VA = "0x44C7C80")]
	internal BranchInstruction()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x44C7CA0", Offset = "0x44C7CA0", VA = "0x44C7CA0")]
	public BranchInstruction(bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x44C7D20", Offset = "0x44C7D20", VA = "0x44C7D20", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
