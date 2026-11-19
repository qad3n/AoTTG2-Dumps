// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001DF")]
internal class NewInstruction : Instruction
{
	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x10")]
	protected readonly ConstructorInfo _constructor;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x18")]
	protected readonly int _argumentCount;

	[Token(Token = "0x1700020F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x5E111B0", Offset = "0x5E101B0", VA = "0x5E111B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000210")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x5E111C0", Offset = "0x5E101C0", VA = "0x5E111C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000211")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x5E111D0", Offset = "0x5E101D0", VA = "0x5E111D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x5E11180", Offset = "0x5E10180", VA = "0x5E11180")]
	public NewInstruction(ConstructorInfo constructor, int argumentCount)
	{
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x5E11200", Offset = "0x5E10200", VA = "0x5E11200", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x5E11350", Offset = "0x5E10350", VA = "0x5E11350")]
	protected object[] GetArgs(InterpretedFrame frame, int first)
	{
		return null;
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x5E11540", Offset = "0x5E10540", VA = "0x5E11540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
