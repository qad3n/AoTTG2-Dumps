// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AssignLocalToClosureInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AB")]
internal sealed class AssignLocalToClosureInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001E7")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E8")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E9")]
	public override string InstructionName
	{
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x2466740", Offset = "0x2464D40", VA = "0x182466740", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal AssignLocalToClosureInstruction(int index)
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x24666B0", Offset = "0x2464CB0", VA = "0x1824666B0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
