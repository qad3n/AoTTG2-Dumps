// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.GetArrayItemInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E4")]
internal sealed class GetArrayItemInstruction : Instruction
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly GetArrayItemInstruction Instance;

	[Token(Token = "0x1700014C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x44C55A0", Offset = "0x44C55A0", VA = "0x44C55A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014D")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x44C55B0", Offset = "0x44C55B0", VA = "0x44C55B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014E")]
	public override string InstructionName
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x44C55C0", Offset = "0x44C55C0", VA = "0x44C55C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x44C5590", Offset = "0x44C5590", VA = "0x44C5590")]
	private GetArrayItemInstruction()
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x44C55F0", Offset = "0x44C55F0", VA = "0x44C55F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
