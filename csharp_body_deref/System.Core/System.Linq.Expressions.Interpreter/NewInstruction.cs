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

[Token(Token = "0x20001DE")]
internal class NewInstruction : Instruction
{
	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x10")]
	protected readonly ConstructorInfo _constructor;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x18")]
	protected readonly int _argumentCount;

	[Token(Token = "0x1700020D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x2478390", Offset = "0x2476990", VA = "0x182478390", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x1A2A540", Offset = "0x1A28B40", VA = "0x181A2A540")]
	public NewInstruction(ConstructorInfo constructor, int argumentCount)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x2478120", Offset = "0x2476720", VA = "0x182478120", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x2477FE0", Offset = "0x24765E0", VA = "0x182477FE0")]
	protected object[] GetArgs(InterpretedFrame frame, int first)
	{
		return null;
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x2478220", Offset = "0x2476820", VA = "0x182478220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
