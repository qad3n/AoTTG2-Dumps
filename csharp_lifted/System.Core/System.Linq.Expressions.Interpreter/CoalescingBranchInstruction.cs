// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CoalescingBranchInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F1")]
internal sealed class CoalescingBranchInstruction : OffsetInstruction
{
	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x17000166")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x5DDD630", Offset = "0x5DDC630", VA = "0x5DDD630", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000167")]
	public override string InstructionName
	{
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x5DDD6C0", Offset = "0x5DDC6C0", VA = "0x5DDD6C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000168")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x5DDD6F0", Offset = "0x5DDC6F0", VA = "0x5DDD6F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000169")]
	public override int ProducedStack
	{
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x5DDD700", Offset = "0x5DDC700", VA = "0x5DDD700", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x5DDD710", Offset = "0x5DDC710", VA = "0x5DDD710", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x5DDD740", Offset = "0x5DDC740", VA = "0x5DDD740")]
	public CoalescingBranchInstruction()
	{
	}
}
