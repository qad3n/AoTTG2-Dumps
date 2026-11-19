// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.SetArrayItemInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E6")]
internal sealed class SetArrayItemInstruction : Instruction
{
	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly SetArrayItemInstruction Instance;

	[Token(Token = "0x17000151")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x5DDB4A0", Offset = "0x5DDA4A0", VA = "0x5DDB4A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000152")]
	public override string InstructionName
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x5DDB4B0", Offset = "0x5DDA4B0", VA = "0x5DDB4B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x5DDB490", Offset = "0x5DDA490", VA = "0x5DDB490")]
	private SetArrayItemInstruction()
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x5DDB4E0", Offset = "0x5DDA4E0", VA = "0x5DDB4E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
