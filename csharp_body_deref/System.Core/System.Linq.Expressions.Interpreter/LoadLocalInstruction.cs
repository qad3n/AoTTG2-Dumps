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
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x44F5C10", Offset = "0x44F5C10", VA = "0x44F5C10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D6")]
	public override string InstructionName
	{
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x44F5C20", Offset = "0x44F5C20", VA = "0x44F5C20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x44F5BF0", Offset = "0x44F5BF0", VA = "0x44F5BF0")]
	internal LoadLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x44F5C50", Offset = "0x44F5C50", VA = "0x44F5C50", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x44F5CE0", Offset = "0x44F5CE0", VA = "0x44F5CE0", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
