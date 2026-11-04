// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.SetArrayItemInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E5")]
internal sealed class SetArrayItemInstruction : Instruction
{
	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly SetArrayItemInstruction Instance;

	[Token(Token = "0x1700014F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000150")]
	public override string InstructionName
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x243F1F0", Offset = "0x243D7F0", VA = "0x18243F1F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private SetArrayItemInstruction()
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x243F0C0", Offset = "0x243D6C0", VA = "0x18243F0C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
