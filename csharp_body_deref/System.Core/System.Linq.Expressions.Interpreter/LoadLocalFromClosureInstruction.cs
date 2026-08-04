// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalFromClosureInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A5")]
internal sealed class LoadLocalFromClosureInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001D9")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000957")]
		[Address(RVA = "0x44F5F30", Offset = "0x44F5F30", VA = "0x44F5F30", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DA")]
	public override string InstructionName
	{
		[Token(Token = "0x6000958")]
		[Address(RVA = "0x44F5F40", Offset = "0x44F5F40", VA = "0x44F5F40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x44F5F10", Offset = "0x44F5F10", VA = "0x44F5F10")]
	internal LoadLocalFromClosureInstruction(int index)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x44F5F70", Offset = "0x44F5F70", VA = "0x44F5F70", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
