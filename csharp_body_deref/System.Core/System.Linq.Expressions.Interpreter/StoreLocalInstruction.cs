// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StoreLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A9")]
internal sealed class StoreLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001E2")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x5E0B690", Offset = "0x5E0A690", VA = "0x5E0B690", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E3")]
	public override string InstructionName
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x5E0B6A0", Offset = "0x5E0A6A0", VA = "0x5E0B6A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x5E0B670", Offset = "0x5E0A670", VA = "0x5E0B670")]
	internal StoreLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x5E0B6D0", Offset = "0x5E0A6D0", VA = "0x5E0B6D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x5E0B750", Offset = "0x5E0A750", VA = "0x5E0B750", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
