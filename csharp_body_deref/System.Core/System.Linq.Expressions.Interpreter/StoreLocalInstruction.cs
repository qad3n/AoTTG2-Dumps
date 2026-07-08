using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A8")]
internal sealed class StoreLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001E0")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000965")]
		[Address(RVA = "0x41D1210", Offset = "0x41D1210", VA = "0x41D1210", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E1")]
	public override string InstructionName
	{
		[Token(Token = "0x6000966")]
		[Address(RVA = "0x41D1220", Offset = "0x41D1220", VA = "0x41D1220", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x41D11F0", Offset = "0x41D11F0", VA = "0x41D11F0")]
	internal StoreLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x41D1250", Offset = "0x41D1250", VA = "0x41D1250", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x41D12D0", Offset = "0x41D12D0", VA = "0x41D12D0", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
