// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeaveFinallyInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F7")]
internal sealed class LeaveFinallyInstruction : Instruction
{
	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Instruction Instance;

	[Token(Token = "0x17000178")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000179")]
	public override string InstructionName
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x243C080", Offset = "0x243A680", VA = "0x18243C080", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private LeaveFinallyInstruction()
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x243BFC0", Offset = "0x243A5C0", VA = "0x18243BFC0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
