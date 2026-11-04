// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A3")]
internal sealed class LoadLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001D5")]
	public override int ProducedStack
	{
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D6")]
	public override string InstructionName
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x2472CD0", Offset = "0x24712D0", VA = "0x182472CD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal LoadLocalInstruction(int index)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x2472C20", Offset = "0x2471220", VA = "0x182472C20", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x2472BB0", Offset = "0x24711B0", VA = "0x182472BB0", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
