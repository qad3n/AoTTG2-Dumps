// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AssignLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A8")]
internal sealed class AssignLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001DF")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000969")]
		[Address(RVA = "0x5E0B540", Offset = "0x5E0A540", VA = "0x5E0B540", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E0")]
	public override int ProducedStack
	{
		[Token(Token = "0x600096A")]
		[Address(RVA = "0x5E0B550", Offset = "0x5E0A550", VA = "0x5E0B550", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E1")]
	public override string InstructionName
	{
		[Token(Token = "0x600096B")]
		[Address(RVA = "0x5E0B560", Offset = "0x5E0A560", VA = "0x5E0B560", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x5E0B520", Offset = "0x5E0A520", VA = "0x5E0B520")]
	internal AssignLocalInstruction(int index)
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x5E0B590", Offset = "0x5E0A590", VA = "0x5E0B590", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x5E0B610", Offset = "0x5E0A610", VA = "0x5E0B610", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
