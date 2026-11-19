// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A4")]
internal sealed class LoadLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001D7")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000958")]
		[Address(RVA = "0x5E0AF90", Offset = "0x5E09F90", VA = "0x5E0AF90", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D8")]
	public override string InstructionName
	{
		[Token(Token = "0x6000959")]
		[Address(RVA = "0x5E0AFA0", Offset = "0x5E09FA0", VA = "0x5E0AFA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x5E0AF70", Offset = "0x5E09F70", VA = "0x5E0AF70")]
	internal LoadLocalInstruction(int index)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x5E0AFD0", Offset = "0x5E09FD0", VA = "0x5E0AFD0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x5E0B060", Offset = "0x5E0A060", VA = "0x5E0B060", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
