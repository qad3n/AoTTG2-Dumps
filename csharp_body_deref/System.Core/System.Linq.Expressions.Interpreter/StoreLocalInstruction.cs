// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StoreLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A8")]
internal sealed class StoreLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001E0")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000965")]
		[Address(RVA = "0x44F6310", Offset = "0x44F6310", VA = "0x44F6310", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E1")]
	public override string InstructionName
	{
		[Token(Token = "0x6000966")]
		[Address(RVA = "0x44F6320", Offset = "0x44F6320", VA = "0x44F6320", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x44F62F0", Offset = "0x44F62F0", VA = "0x44F62F0")]
	internal StoreLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x44F6350", Offset = "0x44F6350", VA = "0x44F6350", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x44F63D0", Offset = "0x44F63D0", VA = "0x44F63D0", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
