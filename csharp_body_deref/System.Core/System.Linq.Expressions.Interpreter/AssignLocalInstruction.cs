// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AssignLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A7")]
internal sealed class AssignLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001DD")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600095F")]
		[Address(RVA = "0x44F61C0", Offset = "0x44F61C0", VA = "0x44F61C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DE")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000960")]
		[Address(RVA = "0x44F61D0", Offset = "0x44F61D0", VA = "0x44F61D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DF")]
	public override string InstructionName
	{
		[Token(Token = "0x6000961")]
		[Address(RVA = "0x44F61E0", Offset = "0x44F61E0", VA = "0x44F61E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x44F61A0", Offset = "0x44F61A0", VA = "0x44F61A0")]
	internal AssignLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x44F6210", Offset = "0x44F6210", VA = "0x44F6210", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x44F6290", Offset = "0x44F6290", VA = "0x44F6290", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
