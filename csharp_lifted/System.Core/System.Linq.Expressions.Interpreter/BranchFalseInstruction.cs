// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.BranchFalseInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EF")]
internal sealed class BranchFalseInstruction : OffsetInstruction
{
	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x17000160")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x5DDD3B0", Offset = "0x5DDC3B0", VA = "0x5DDD3B0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000161")]
	public override string InstructionName
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x5DDD440", Offset = "0x5DDC440", VA = "0x5DDD440", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000162")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x5DDD470", Offset = "0x5DDC470", VA = "0x5DDD470", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x5DDD480", Offset = "0x5DDC480", VA = "0x5DDD480", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x5DDD4E0", Offset = "0x5DDC4E0", VA = "0x5DDD4E0")]
	public BranchFalseInstruction()
	{
	}
}
