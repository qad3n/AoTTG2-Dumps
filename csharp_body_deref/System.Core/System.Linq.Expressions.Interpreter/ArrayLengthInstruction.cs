// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ArrayLengthInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E7")]
internal sealed class ArrayLengthInstruction : Instruction
{
	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ArrayLengthInstruction Instance;

	[Token(Token = "0x17000153")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x5DDB5E0", Offset = "0x5DDA5E0", VA = "0x5DDB5E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000154")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x5DDB5F0", Offset = "0x5DDA5F0", VA = "0x5DDB5F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000155")]
	public override string InstructionName
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x5DDB600", Offset = "0x5DDA600", VA = "0x5DDB600", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x5DDB630", Offset = "0x5DDA630", VA = "0x5DDB630")]
	private ArrayLengthInstruction()
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x5DDB640", Offset = "0x5DDA640", VA = "0x5DDB640", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
