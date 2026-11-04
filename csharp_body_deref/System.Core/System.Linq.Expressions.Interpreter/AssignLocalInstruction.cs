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
		[Token(Token = "0x600095E")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DE")]
	public override int ProducedStack
	{
		[Token(Token = "0x600095F")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DF")]
	public override string InstructionName
	{
		[Token(Token = "0x6000960")]
		[Address(RVA = "0x2466680", Offset = "0x2464C80", VA = "0x182466680", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal AssignLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x24665E0", Offset = "0x2464BE0", VA = "0x1824665E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x2466570", Offset = "0x2464B70", VA = "0x182466570", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
