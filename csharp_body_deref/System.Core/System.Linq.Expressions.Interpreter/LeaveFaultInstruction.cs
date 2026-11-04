// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeaveFaultInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F9")]
internal sealed class LeaveFaultInstruction : Instruction
{
	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Instruction Instance;

	[Token(Token = "0x1700017C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017D")]
	public override int ConsumedContinuations
	{
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017E")]
	public override string InstructionName
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x243BF90", Offset = "0x243A590", VA = "0x18243BF90", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private LeaveFaultInstruction()
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x243BEF0", Offset = "0x243A4F0", VA = "0x18243BEF0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
