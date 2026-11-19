// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.GetArrayItemInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E5")]
internal sealed class GetArrayItemInstruction : Instruction
{
	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly GetArrayItemInstruction Instance;

	[Token(Token = "0x1700014E")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x5DDB340", Offset = "0x5DDA340", VA = "0x5DDB340", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014F")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x5DDB350", Offset = "0x5DDA350", VA = "0x5DDB350", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000150")]
	public override string InstructionName
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x5DDB360", Offset = "0x5DDA360", VA = "0x5DDB360", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x5DDB330", Offset = "0x5DDA330", VA = "0x5DDB330")]
	private GetArrayItemInstruction()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x5DDB390", Offset = "0x5DDA390", VA = "0x5DDB390", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
