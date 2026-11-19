// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.BranchTrueInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F0")]
internal sealed class BranchTrueInstruction : OffsetInstruction
{
	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x17000163")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x5DDD4F0", Offset = "0x5DDC4F0", VA = "0x5DDD4F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public override string InstructionName
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x5DDD580", Offset = "0x5DDC580", VA = "0x5DDD580", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x5DDD5B0", Offset = "0x5DDC5B0", VA = "0x5DDD5B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x5DDD5C0", Offset = "0x5DDC5C0", VA = "0x5DDD5C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x5DDD620", Offset = "0x5DDC620", VA = "0x5DDD620")]
	public BranchTrueInstruction()
	{
	}
}
