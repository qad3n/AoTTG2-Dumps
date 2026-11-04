// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ValueTypeCopyInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AC")]
internal sealed class ValueTypeCopyInstruction : Instruction
{
	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ValueTypeCopyInstruction Instruction;

	[Token(Token = "0x170001EA")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EB")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000977")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EC")]
	public override string InstructionName
	{
		[Token(Token = "0x6000978")]
		[Address(RVA = "0x2482CE0", Offset = "0x24812E0", VA = "0x182482CE0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x2482C20", Offset = "0x2481220", VA = "0x182482C20", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ValueTypeCopyInstruction()
	{
	}
}
