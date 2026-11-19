// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.BranchInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F2")]
internal class BranchInstruction : OffsetInstruction
{
	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[][][] s_caches;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x14")]
	internal readonly bool _hasResult;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x15")]
	internal readonly bool _hasValue;

	[Token(Token = "0x1700016A")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x5DDD750", Offset = "0x5DDC750", VA = "0x5DDD750", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000625")]
		[Address(RVA = "0x5DDDA20", Offset = "0x5DDCA20", VA = "0x5DDDA20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x5DDDA50", Offset = "0x5DDCA50", VA = "0x5DDDA50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016D")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x5DDDA60", Offset = "0x5DDCA60", VA = "0x5DDDA60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x5DDD9D0", Offset = "0x5DDC9D0", VA = "0x5DDD9D0")]
	internal BranchInstruction()
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x5DDD9F0", Offset = "0x5DDC9F0", VA = "0x5DDD9F0")]
	public BranchInstruction(bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x5DDDA70", Offset = "0x5DDCA70", VA = "0x5DDDA70", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
